#include <stdio.h>
int main(){

	int a;
	
	printf("Digite um valor!\n");
	scanf("%d", &a); 

	printf("Eh par:%s\n",(a % 2 == 0 ? "true" : "false"));	
//	printf("Eh par:%d\n", a%2 == 0);

	return 0;
}
