#include <stdio.h>//unfinished

int main(){

	int k,i,n,j,vet[50],vetD[50];
	
	while(scanf("%d", &n) != 0){
		
		//definicao de vetor
		for(i = 1; i <= 50; i++){
			vet[i-1] = i;
		}
	
		//ajuste em n
		n-=1;


		//loop p/ o conjunto  de funcoes
		for(j = 0, k = n; j < n ; j++, k--){
			//elimi 1 numero
			vetD[j] = vet[0];
			for(i = 0; i < k; i++){			
				vet[i] = vet[i+1];
			}	
			//mover vet
			vet[k] = vet[0];
			//elim vet mov
			for(i = 0; i < n; i++){
				vet[i] = vet[i+1];
			}
		}
	

		//saida requisitada
		printf("Discarded cards: %d", vetD[0]);
		for(i = 1; i < n; i++){
			printf(", %d", vetD[i]);
		}
		printf("\nRemaining card: %d\n", vet[0]);
		

		for(i = 0; i < 10; i++){
			printf("%d, ", vet[i]);
		}
		printf("\n")
	}

	return 0;
}







