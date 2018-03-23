#include <stdio.h>
int main(){

int valor, divisao, mult, valor1,divisor, primo,divisores;



printf("Digite um número inteiro!\n");
scanf("%d", &valor);

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

printf("valor = %d\ndivisores = %d\ndivisor = %d\n", valor, divisores, divisor);
//printf("O numero %d possui %d divisores\n", valor, divisores);


	return 0;
}
