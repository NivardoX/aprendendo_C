#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"
#include "codigoYves.h"

int main(){

	int i,j;
	int x,y;
	
	unsigned char **M;

    char pgmSaida[30];
	char pgmNome[30];
	int scale, element,limite;
	char op,op2;
	
	//Entra com os valores necessarios.
	printf("\n----------------------------------------------------\n");
	printf("Digite o nome do arquivo a ser trabalhado:\n");
    scanf("%s", pgmNome);
    strcat(pgmNome,".pgm");
    printf("Digite o nome do arquivo de saída:\n");
    scanf("%s", pgmSaida);
    strcat(pgmSaida,".pgm");
	printf("Voce quer Suavizar(S), convoluir(C) ou remover Ruidos(R)?\n");
    setbuf(stdin,NULL);
    scanf("%c", &op);
    setbuf(stdin,NULL);


	if(op == 'S'){
    	printf("Digite o tamanho da janela:\n");
		scanf("%d",&janela);
	}else if(op == 'C'){
	    printf("Laplace(L), Prewit(P) ou Sobel(S)?\n");
        getchar();
  	    scanf("%c",&op2);
		
		if(op2 != 'L' && op2 != 'P' && op2 != 'S'){
			printf("Opcao invalida.\n");
			return main();
		}

        setbuf(stdin,NULL);		
		janela = 3;		
	}else if(op == 'R'){
		printf("Digite o tamanho da janela:\n");
		scanf("%d",&janela);
	}else{
		printf("Opcao invalida.\n");
		return main();
	}
    
   //Verifica por casos impossiveis.
    if(janela <= 1 || janela%2 == 0){
        printf("A janela deve ser um número ímpar maior que 1.\n");
        setbuf(stdin,NULL);
        
        return main();

	}

	//Tenta fazer a conexao com o arquivo.	
	pgm = fopen(pgmNome, "r");
	if(pgm == NULL){
		printf("Arquivo invalido.\nDigite somente o nome do arquivo sem a extensao!\n");
		setbuf(stdin,NULL);

		exit(1);
	}

	//le o cabecalho do arquivo
	lerCabecalho(&x,&y,&scale);
    int temp = (janela/2)*2;
    //Aloca matriz do tamanho passado.
	M = criarMatriz(x+temp, y+temp);
	//Le imagem e atribui a matriz alocada.
	lerImagem(M,x+1,y+1);
	

	//chama a funcao pedida
   	if( op == 'S'){
   		M = filtro(M,x,y,janela);
   	}else if(op == 'C'){
   		M = cat_shadow(M,x+1,y+1,op2);
   	}else if(op == 'R'){
		M = filtro2(M,x,y,janela);
	}
    
    //Escreve o arquivo de saida a partir da matriz trabalhada.
	criarArquivoBorda(M,x,y, scale,pgmSaida);
	//fecha o streaming e desaloca matriz;
	fclose(pgm);
    freeMatriz(M,x);

	return 0;
}
