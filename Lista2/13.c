#include <stdio.h>
int main(){
	int i,M,n,vezes,vt[1000000];
	
	printf("Digite a quantidade de numeros!\n");
	scanf("%d",&n);
	printf("Digite os %d valores!\n",n);
	for(i = 0; i < n; i++){
		scanf("%d", &vt[i]);	
		if(vt[i] > M){
			M = vt[i];
		}
	}
	vezes = 0;
	for(i = 0; i < n; i++){
		if(vt[i] == M){
			vezes++;		
		}
	}

	printf("O maior numero foi %d, digitado %d vezes\n", M, vezes);
	
	return 0;
}
