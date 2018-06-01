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

	
	unsigned char **M;
	
    char pgmNome[30];
    int scale, element, limite;
    printf("Digite o nome do arquivo a ser suavizado: ");
    scanf("%s", pgmNome);

	pgm = fopen(pgmNome , "r");
    if(pgm == NULL){
	   printf("Não pôde ser aberto");
	   exit(1);
	}
		
	char *lixo;
	fgets(lixo,2,pgm);
	
	fscanf(pgm, "%d %d %d", &m, &n, &scale);

	M = criarMatriz(m+2,n+2);
	bordear(M,m,n);
	lerImagem(M,m,n);

	unsigned char **M2;
	M2 = criarMatriz(m,n);


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



unsigned char pos(unsigned char **M,int x,int y){
	return *(M+(m*x) + y);
}
