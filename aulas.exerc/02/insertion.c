#include <stdio.h>
int main(){

	int v[4] = (10, 20, -7, 2);
	int aux, i, j, chave;
	
	

	for(i = 1; i < 4; i++){
			chave = v[i];
			j = i - 1;
			while( j >= 0 && v[j] > chave){
				v[j+1] = v[j];
				j--;
			}

	}
	
	for(i = 0; i < 3; i++){
		printf("Vetor %d é %d", i + 1, v[i]);
	}

	return 0;
}

