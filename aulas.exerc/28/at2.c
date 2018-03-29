#include <stdio.h>
int main(){

	int vt[10];
	int x, x1, aux, y,soma,media;

	
	for(y = 0; y <= 9; y++){
		printf("digite vt %d\n", y+1);
		scanf("%d", &vt[y]);
	}
	
	x = 0;
	while(x <= 9){		//funcao de ordem, em funcao de valor x
		x1 = x + 1;
		while(x1 <= 9){	//funcao de ordem, em funcao de valor x1
			if(vt[x] >= vt[x1]){	
				aux = vt[x];
				vt[x] = vt[x1];
				vt[x1] = aux;
			}
		x1++;
		}
	x++;		
	}
	

	for(y = 0; y <= 9; y++){
		printf("%d, ", vt[y]);
	}

	soma = 0;			//funcao p/ soma
	for(y = 0; y <= 9; y++){
		soma += vt[y];
}

	media = soma/10;

	printf("\nMaior valor : %d\n",vt[9]);
	printf("Menor valor : %d\n",vt[0]);
	printf("Media : %d\n", media);
	printf("Soma : %d\n", soma);
	
	return 0;
}
