#include <stdio.h>
int main(){
	int i,n,M,m;
	i = 9;
	printf("Digite 10 valores!\n");	
	scanf("%d", &n);
	m = n;
	M = n;		

	while(i--){
		scanf("%d", &n);
		if(n > M){
		M = n;
		}else if(n < m){
		m = n;
		}		
	}	
	printf("O maior valor eh %d\nO menor valor eh %d\n",M,m);
	
	return 0;
}
