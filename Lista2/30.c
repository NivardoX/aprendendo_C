#include <stdio.h>

int maiorN(int maior, int menor);

int main(){
	int a,b;	

	printf("Digite dois numeros!\n");
	scanf("%d %d", &a,&b);	

	printf("O maior eh %d\n", maiorN(a,b));

	return 0;
}

int maiorN(int maior, int menor){
	
	if(maior < menor){
		maior = menor;	
	}

	return maior;
}
