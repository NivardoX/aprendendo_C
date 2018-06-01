#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *pgm;
FILE *pgmSuave;
int m, n;


unsigned char** criarMatriz(int x,int y);
void lerImagem(	unsigned char **M,int x,int y);
void bordear(unsigned char **M,int x,int y);
unsigned char pos(unsigned char **M,int x,int y);


int main(){


	int i,j;
	
	unsigned char **M;
	
	printf("inicio de main\n");
	
    char pgmNome[30];
    int scale, element, limite;
    printf("Digite o nome do arquivo a ser suavizado: ");
    scanf("%s", pgmNome);

	pgm = fopen(pgmNome , "r");
    if(pgm == NULL){
	   printf("Não pôde ser aberto");
	   exit(1);
	}
	
	printf("arquivo aberto\n");
		
	char lixo[4];
	fgets(lixo,2,pgm);
	
	fscanf(pgm, "%d %d %d", &m, &n, &scale);

	printf("header lido\n");


	M = criarMatriz(m+2,n+2);
	bordear(M,m,n);
	lerImagem(M,m,n);

	unsigned char **M2;
	M2 = criarMatriz(m,n);


	for(i = 0 ; i < m; i++){
		for(j = 0 ; j < n;j++){
			printf("%c ", M[i][j]);
		}
		printf("\n");
	}

	return 0;
}




unsigned char** criarMatriz(int x,int y){
	unsigned char **temp;
	
	printf("criando ini\n");
	
	temp =(unsigned char **)malloc(x * sizeof(char*));
	
	int i;
	for(i = 0 ; i < x; i++){
		temp[i] =(unsigned char*) malloc(y * sizeof(unsigned char));
	}
	
	printf("criando fim\n");
	
	return temp;
}

void bordear(unsigned char **M,int x,int y){

	int i;
	
	printf("bordeando ini\n");
	
	for(i = 0; i < x +2;i++){
		M[0][i] = '0';
		M[x+2][i] = '0';
	}
	
	printf("bordeando meio\n");

	for(i = 0; i < y +2;i++){
		M[i][0] = '0';
		M[i][y+2] = '0';
	}
	
	printf("bordeando fim\n");
	
}

void lerImagem(	unsigned char **M,int x,int y){
	int i,j;
	char *lixo;
	unsigned char temp;
	
	printf("lendo imagem ini\n");
	
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
	
	printf("lendo imagem fim\n");
	
}



unsigned char pos(unsigned char **M,int x,int y){
	return *(M+(m*x) + y);
}
