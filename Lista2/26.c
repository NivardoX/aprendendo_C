#include <stdio.h>

int dobro(int x);

int main(){

	int n;
	
	printf("Digite um valor para receber seu dobro!\n");
	scanf("%d",&n);

	printf("O dobro de %d eh %d\n",n,dobro(n));

	return 0;
}

int dobro(int x){

	return x<<1;
}
