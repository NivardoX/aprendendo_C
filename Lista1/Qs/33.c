#include <stdio.h>
int main(){

	int a;
	
	printf("Digite um numero inteiro!\n");
	scanf("%d", &a); 


	printf("O numero lido foi: %d\n",a);
	printf("Seu dobro eh: %d\n",a<<1);
	printf("Sua metade eh: %d\n",a>>1);	

	return 0;
}
