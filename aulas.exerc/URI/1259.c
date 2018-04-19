#include <stdio.h> //unfinished
int main(){

	int vt[10000], i, n,aux;

	while(scanf("%d", &n) != EOF){
	
		for(i = 0; i < n; i++){
			scanf("%d", &vt[i]);
	
			if(vt[i]%2 == 0 && i != 0){ //verificar se é par ou 1 posicao
				if(vt[i-1]%2 == 1 | vt[i-1] > vt[i]){ //verificar se anterior é impar ou maior
					aux = vt[i]; //troca de variaveis
					vt[i] = vt[i-1];
					vt[i-1] = aux;
				}
			}else if(vt[i]%2 == 1 && i != 0){ //verificar se é impar ou 1 posicao
			    if(vt[i-1]%2 == 1 && vt[i-1] < vt[i]){ //verificar se anterior é impar e se é menor
			        aux = vt[i]; //troca de variaveis
					vt[i] = vt[i-1];
					vt[i-1] = aux;
			    }
			}
		}
		for(i = 0 ; i <  n; i++){
			printf("%d, ", vt[i]);
		}
		printf("\n");
	}

	return 0;
}
