#include <stdio.h>
int main(){
	
	int n;
	float f;

	printf("Digite um numero inteiro e um numero flutuante para saber o produto entre os mesmos!\n");
	scanf("%d %f", &n, &f);
	printf("O produto do numero %.2f e %d eh: %.2f\n", f, n, f * n);	

	return 0;
}
