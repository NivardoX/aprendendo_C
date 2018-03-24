#include <stdio.h>
int main(){
	
	int n1,n2;

	printf("Digite dois numeros inteiros para saber a media entre os mesmos!\n");
	scanf("%d %d", &n1, &n2);
	printf("O media entre os dois valores eh: %.1f\n", ((float)n1+n2)/2);	

	return 0;
}
