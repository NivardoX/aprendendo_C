#include <stdio.h>
int main(){

	char opc;
	printf("Selecione uma das operacoes : \nS - Soma\nD - Diferenca\nP - produto\nQ - Divisao\n");
	scanf("%c", &opc);
	
	int x;
	int y;
	
	printf("Digite os numeros a serem operados!\n");	
	scanf("%d %d", &x, &y);

	int soma = x + y;
	int sub = x - y;
	int prod = x * y;
	int div = x / y;


	if(opc == 'q' && y == 0) {
		printf("operacao invalida\n");
		}else {
		switch(opc){
			case 's':
			printf("O resultado da soma eh %d\n", soma);
			break;
			case 'd':
			printf("O resultado da subtracao eh %d\n", sub);
			break;
			case 'p':
			printf("O resultado da multiplicacao eh %d\n", prod);
			break;
			case 'q':
			printf("O resultado da divisao eh %d\n", div);
			break;
			default:
			printf("Invalido!");
		}
	}



	printf("Opcao : %c\nNumeros %d e %d\n", opc, x, y); //teste

	return 0;
}
