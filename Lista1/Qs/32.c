#include <stdio.h>
int main(){

	int a,b,c;
	
	printf("Digite o primeiro valor!\n");
	scanf("%d", &a); 
	printf("Digite o segundo valor!\n");
	scanf("%d", &b); 
	printf("Digite o terceiro valor!\n");
	scanf("%d", &c); 

	printf("O 1 numero lido foi: %d\nSeus sucessores sao: %d, %d e %d\n",a, a+1, a+2, a+3);
	printf("O 2 numero lido foi: %d\nSeus sucessores sao: %d, %d e %d\n",b, b+1, b+2, b+3);
	printf("O 3 numero lido foi: %d\nSeus sucessores sao: %d, %d e %d\n",c, c+1, c+2, c+3);	

	return 0;
}
