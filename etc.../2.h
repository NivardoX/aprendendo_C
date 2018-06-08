#define ABSURDOMEUDEUS 1000000

using namespace std;

FILE *pgm;
FILE *newPgm;
int janela;

unsigned char** criarMatriz(int x, int y){
	unsigned char **temp;

	temp = (unsigned char**)malloc(x* sizeof(char*));
	
	int i;

	for(i = 0; i < x; i++){
		temp[i] = (unsigned char*)malloc(y*sizeof(char));
	}

	return temp;
}



unsigned char** lerImagem(unsigned char **M, int x, int y){

	int i,j;
	char lixo[1000];
	unsigned char temp;

	for(i = janela/2; i < x + janela/2 -1; i++){
		for(j = janela/2; j < y + janela/2 -1; j++){
	        char k;
	        
	        k = fgetc(pgm);
	        if( k == '#'){
	            j--;
	            fgets(lixo,ABSURDOMEUDEUS,pgm);
	            continue;	
            }
            fseek(pgm,-1,SEEK_CUR);
		    fscanf(pgm, "%hhu ", &temp);
			M[i][j] = temp;	
		}
	}

	return M;
}


unsigned char** filtro(unsigned char **original, int x, int y,int jan){
    
    unsigned char **M;
     
    int aux = jan/2;
    M = criarMatriz(x + 2*aux, y + 2*aux);
    for(int i = 0; i < x + 2*aux; i++){
	    for(int j = 0; j < y + 2*aux; j++){
		    M[i][j] = 0;
	    }
    }
    for(int i = aux; i < x + aux; i++){
	    for(int j = aux; j < y + aux; j++){
		    M[i][j] = original[i][j];
	    }
    }

    int soma = 0;
    for(int linha = aux; linha < x + aux; linha++){
	    for(int coluna = aux; coluna < y + aux; coluna++){
		    for(int i = linha - aux; i < linha + aux + 1; i++){
			    for(int j = coluna - aux; j < coluna + aux + 1; j++){
				    soma += M[i][j];

			    }
		}
		M[linha][coluna] = soma / (jan*jan);
		soma = 0;
	    }
    }
    
    return M;
}

void lerCabecalho(int *x,int *y,int *scale){

	char lixo[1000];
	unsigned char c;
	fgets(lixo,ABSURDOMEUDEUS,pgm);
	*y = -1;
	*x = -1;
	*scale = -1;
	while(*scale <= 0 ){
	    
	    char k;
		k = fgetc(pgm);
        
        if( k == '#'){
			fgets(lixo,ABSURDOMEUDEUS,pgm);
            continue;	
        }     
        
        fseek(pgm,-1,SEEK_CUR);
		
        fscanf(pgm, "%c",&c);
        
		
			if(*y == -1){
				fseek(pgm,-1,SEEK_CUR);
				fscanf(pgm, "%d", &(*y));

			}else if(*x == -1){
				fseek(pgm,-1,SEEK_CUR);
				fscanf(pgm, "%d", &(*x));	

			}else if(*scale == -1){	
				fseek(pgm,-1,SEEK_CUR);
				fscanf(pgm, "%d", &(*scale));
			
		}	
	}
}

void bordear(unsigned char **M, int x, int y){

	int i;

	cout << "borda ini\n";

	for(i = 0; i <= y+1;i++){
		M[0][i] = 255;
		M[x+1][i] = 255;
	}

	cout << "borda meio\n";

	for(i = 0; i <= x+1;i++){
		M[i][0] = 255;
		M[i][y+1] = 255;
	}
	
	cout << " borda fim\n";

}

void freeMatriz(unsigned char **M, int x){
	int i;
	for (i = 0; i < x; ++i){
		free(M[i]);
		exit(1);
    }
}
void criarArquivoBorda(unsigned char **M, int x, int y, int scale,char *nome){

	int i,j;
	
	newPgm = fopen(nome, "w");

	if(newPgm == NULL){
		printf("Impossivel criar arquivo\n");
		exit(1);
	}

	fprintf(newPgm,"P2\n");
	fprintf(newPgm,"%d %d\n", y, x);
	fprintf(newPgm,"%d\n", scale);

	for(i = janela/2; i < x+janela/2 ; i++){
		for(j = janela/2; j < y+janela/2 ; j++){
			fprintf(newPgm,"%d ", M[i][j]);
		}
		fprintf(newPgm,"\n");
	}
	fclose(newPgm);
	printf("Arquivo criado com sucesso.\n");
}
