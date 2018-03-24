#include <stdio.h>
int main(){
	
	int n1,n2;

	printf("Digite dois numeros inteiros para saber a media entre os mesmos!\n");
	scanf("%d %d", &n1, &n2);
	printf("A media aritmetica entre %d e %d eh: %.1f.\n", n1, n2,((float)n1+n2)/2);	

	return 0;
}
