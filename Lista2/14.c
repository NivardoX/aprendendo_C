#include <stdio.h>

int main(){

	int n;
	
	printf("Digite o valor a ser utilizado!\n");
	scanf("%d", &n);

	printf("%d - ",n);
	printf(" %d centenas,", n/100 );
	printf(" %d dezenas e", (n%100 - n%10)/10);
	printf(" %d unidades.\n", n%100 - (n%100 - n%10));

	return 0;
}
