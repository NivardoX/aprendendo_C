#include <stdio.h>
int main(){

	char a;

	printf("Digite um caractere minusculo!\n");
	scanf("%c", &a);
	
	printf("Caractere lido:\t\t'%c'\nCodigo ASCII:\t\t'%d'\nCaractere maiusculo:\t'%c'\nCodigo ASCII:\t\t'%d'\n", a,(int)a,a - 32,(int)(a - 32));	

	return 0;
}
