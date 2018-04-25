#include <stdio.h>
int main(){
	int i,n,sum;
	i = 10;
	printf("Digite 10 valores!\n");	
	sum = 0;
	while(i--){
	scanf("%d", &n);
	sum+= n;	
	}	
	printf("A soma dos 10 valores eh %d\n", sum);
	
	return 0;
}
