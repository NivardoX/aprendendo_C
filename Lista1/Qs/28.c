#include <stdio.h>
int main(){

	char a[100];

	printf("Digite uma string!\n");
	scanf("%[^\n]s", a);
	
	a[0] = (a[0] < 91 ? a[0] : a[0] - 32); 

	printf("%s\n",a);	

	return 0;
}
