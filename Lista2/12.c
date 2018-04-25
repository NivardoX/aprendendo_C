#include <stdio.h>
int main(){
	int i,n;
	
	printf("Digite a quantidade de numeros!\n");
	scanf("%d",&n);

	for(i = 0; i <= n; i++){
		printf("%d ",i);
	}	
	printf("\n");
	
	return 0;
}
