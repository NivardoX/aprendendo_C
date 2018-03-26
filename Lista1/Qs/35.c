#include <stdio.h>
int main(){

	int a,b,c,aux;
	
	printf("Digite o primeiro numero!\n");
	scanf("%d", &a); 
	printf("Digite o segundo numero!\n");
	scanf("%d", &b); 
	printf("Digite o terceiro numero!\n");
	scanf("%d", &c); 

	if(a < b){
		aux = a;
		a = b;
		b = aux;
	}
	if(a < c){
		aux = a;
		a = c;
		c = aux;
	}
	if(b < c){
		aux = b;
		b = c;
		c = aux;
	}

	printf("Os tres valores em ordem decrescente sao: %d, %d e %d\n",a,b,c);

	return 0;
}
