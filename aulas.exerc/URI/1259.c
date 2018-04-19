#include <stdio.h> //unfinished
int main(){



	while(scanf("%d", n) != EOF){
	
		for(i = 0; i < n; i++){
			scanf("n", vt[i])
			v[i] = n;		
	
			if(vt[i]%2 == 0 && i != 0){ //verificar se é par ou 1 posicao
				if(vt[i-1]%2 == 1 | vt[i-1] > vt[i]){ //verificar se anterior é impar ou maior
					vt[i] = aux;
					vt[i] = vt[i-1];
					vt[i-1] = aux;
				}
			}
		}
		for(i = 0 ; i <  n; i++){
			printf("%d, ", vt[i]);
		}
	}

	return 0;
}
