#include <stdio.h> //unfinished
int main(){

	int vt[10000], i, n,aux;

	while(scanf("%d", &n) != EOF){
	
		for(i = 0; i < n; i++){
			scanf("%d", &vt[i]);
	
	        while(i != 0 && vt[i]% 2 == 0 &&(vt[i-1]%2 == 1 | vt[i-1] > vt[i])){ //verificar se é par ou 1 posicao e se anterior é impar 
				aux = vt[i]; //troca de variaveis
				vt[i] = vt[i-1];
				vt[i-1] = aux;
			}
			while(i != 0 && vt[i]% 2 == 1 &&(vt[i-1]%2 == 1 & vt[i-1] > vt[i])){ // verificar se é impar ou 1 posicao e ordem
		        aux = vt[i]; //troca de variaveis
				vt[i] = vt[i-1];
				vt[i-1] = aux;
		    }
		}
		
		for(i = 0 ; i < n; i++){
			printf("%d, ", vt[i]);
		}
		printf("\n");
	}

	return 0;
}
