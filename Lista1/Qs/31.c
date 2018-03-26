#include <stdio.h>
int main(){

	int a;
	
	printf("Digite um valor!\n");
	scanf("%d", &a); 

	printf("Eh impar:%s\n",(a % 2 == 1 ? "true" : "false"));	
//	printf("Eh impar:%d\n", a%2 == 1);

	return 0;
}
