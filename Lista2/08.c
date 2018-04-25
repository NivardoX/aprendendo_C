#include <stdio.h>
int main(){
	int i,n,med;
	i = 10;
	printf("Digite 10 valores!\n");	
	med = 0;
	while(i--){
		scanf("%d", &n);
		med+= n;	
	}	
	printf("A media aritmetica dos 10 valores eh %d\n", med/10);
	
	return 0;
}
