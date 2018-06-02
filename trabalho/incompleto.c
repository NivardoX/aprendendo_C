#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *pgm;
FILE *pgmSuave;
int m, n;
//protótipos
//aloca a matriz com a resolucao passada
unsigned char** criarMatriz(int x,int y);
//pega os caracteres ASCII da imagem e joga na matriz M
void lerImagem(	unsigned char **M,int x,int y);
//faz a suavizacao com janela 3x3, pega a origem de M e poe a saida em M2
void tratarImagem(unsigned char **M2,unsigned char **M,int x,int y);
//criar arquivo tradado
void criarNovoArquivo(unsigned char **M2,char *saidaNome,int x,int y,int lim);
//bordea com 0
void bordear(unsigned char **M,int x,int y);
//
unsigned char pos(unsigned char **M,int x,int y);

int main(){

	unsigned char **M;
	
    char pgmNome[30];
    char pgmSuaveNome[30];
    int scale, element, limite;
    printf("Digite o nome do arquivo a ser suavizado: ");
    scanf("%s", pgmNome);
    printf("Digite o nome do arquivo a ser criado: ");
    scanf("%s", pgmSuaveNome);

	//abre a stream
    pgm = fopen(pgmNome , "r");
    if(pgm == NULL){
	   printf("Não pôde ser aberto");
	   exit(1);
	}
	
	char lixo[3];
	fgets(lixo,2,pgm);
	
	//scaneia o tamanho e o lim
	fscanf(pgm, "%d %d %d", &m, &n, &scale);
	
	//cria a matriz e le a imagem.
	M = criarMatriz(m+2,n+2);
	bordear(M,m,n);
	lerImagem(M,m,n);
	
	//decleara matriz da imagem de saida
	unsigned char **M2;
	M2 = criarMatriz(m,n);
	
	//trata a matriz e joga em outra.
	tratarImagem(M2,M,m,n);		

    pgmSuave = fopen(pgmSuaveNome , "w+");
    if(pgmSuave == NULL){
	   printf("Não pôde ser aberto");
	   exit(1);
	}

	//cria o arquivo de saida.
	criarNovoArquivo(M2,pgmSuaveNome,m,n,scale);
		
	return 0;
}


unsigned char** criarMatriz(int x,int y){
	unsigned char **temp;
	
	temp =(unsigned char **)malloc(x * sizeof(char*));
	
	int i;
	for(i = 0 ; i < x; i++){
		temp[i] =(unsigned char*) malloc(y * sizeof(unsigned char));
	}

	return temp;
}

void bordear(unsigned char **M,int x,int y){

	int i;
	for(i = 0; i < x +2;i++){
		M[0][i] = '0';
		M[x+2][0] = '0';
	}

	for(i = 0; i < y +2;i++){
		M[i][0] = '0';
		M[0][y+2] = '0';
	}
}

void lerImagem(	unsigned char **M,int x,int y){
	int i,j;
	char *lixo;
	unsigned char temp;
	for(i = 1 ; i< x;i++){
		for(j=1 ; j < y;j++){
		
			fscanf(pgm,"%c ",temp);
			if(temp == '#' || temp == '\n'){
				fgets(lixo,51465654,pgm);
				j--;
			}else if(temp == ' '){
				j--;
				continue;
			}else{
				M[i][j] = temp;
			}	

		}
	}
}

void tratarImagem(unsigned char **M2,unsigned char **M,int x,int y){
	
	int i,j;
	unsigned char media;
	for(i = 1 ; i< x;i++){
		for(j=1 ; j < y;j++){
			media = M[i+1][j+1]/9 +M[i+1][j]/9 +M[i+1][j-1]/9 +M[i][j+1]/9 +M[i][j]/9 +M[i][j-1]/9 +M[i-1][j+1]/9 +M[i-1][j]/9 +M[i-1][j-1]/9; 
			M2[i][j] = media;
		}
	}
}

void criarNovoArquivo(unsigned char **M2,char *saidaNome,int x,int y,int lim){
	rewind(pgm);

	int i,j;
	fprintf(pgm, "P2 \n%d %d \n%d", &x, &y, &lim);
	
	for(i = 0 ; i< x;i++){
		for(j=0 ; j < y;j++){
			if(j %10 == 0)
				printf("\n");
			fprintf(pgm,"%c ", M2[i][j]);
		}
	}
}

unsigned char pos(unsigned char **M,int x,int y){
	return *(M+(m*x) + y);
}
