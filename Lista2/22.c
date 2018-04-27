#include <stdio.h>
int main(){

    int n,i,b,v;

	printf("Digite o tamanho do triangulo\n");
    scanf("%d", &n);
    
	v = 1;
	for(i = 1; i <= n; i++){
		for(b = 0; b < i; b++){
			printf("%d\t", v);
			v++;
		}
		printf("\n");
	}

    return 0;
}
