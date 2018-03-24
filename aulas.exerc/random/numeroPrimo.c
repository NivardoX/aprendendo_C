#include <stdio.h>
int main(){

	int valor,divisao,mult,divisor,primo,divisores;

	valor = 0;
	while(valor < 2){
	printf("Digite um número inteiro maior do que 1!\n");
	scanf("%d", &valor);
}

	divisor = 1;
	divisores = 1;
	
		while(divisor != valor){		
			divisao = valor/divisor;
			mult = divisao * divisor;
				if( mult == valor ){
					divisores++;
					divisor++;
				}else{
					divisor++;
				}
			}
		
		if(divisores == 2){
			printf("o numero %d possui apenas %d divisores, sendo assim ele eh primo!\n",valor, divisores);	
	}else if(divisores > 2){
		printf("o numero %d possui %d divisores, sendo assim nao eh primo\n", valor, divisores);	
}

//	printf("valor = %d\ndivisores = %d\ndivisor = %d\n", valor, divisores, divisor);
//	printf("O numero %d possui %d divisores\n", valor, divisores);


	return 0;
}
