#include <stdio.h>
int main(){

	int vt0[100001], vt1[100001];
	int i,posV0,posV1,n,m,vA,v;

	posV0 == 0;
	posV1 == 0;

	while(scanf("%d %d",&n,&m), n!=0 && m!=0){
		
		while(n--){
			scanf("%d", &v);
			if(v%m == 0){ //atribuicao de valores para modulos 0
				if(posV0 == 0){
					vt0[0] = v;
				}else{
					vA = vt0[posV0-1];//valor do vetor na posicao anterior
					i = posV0 - 1;
					while(i >= 0){
						if(vA%2 == 0 && v%2 != 0){ //modudos iguais a 0, troca de par e impar
							vt0[i+1] = vt0[i];
							i--;
						} else if((vA%2 != 0 && v%2 != 0) && (v > vA)){ //modulos iguais a 0, troca de 2 numeros impares						
							vt0[i+1] = vt0[i];
							i--;
						} else if((vA%2 == 0 && v%2 == 0) && (v < vA)){ //modulos iguais a 0, troca de 2 numeros pares
							vt0[i+1] = vt0[i];
							i--;					
						} else{
							 break;
		  				}
				 	}
					vt0[i+1] = v;
			 	}
				posV0++;

			} else{
				vt1[posV1] = v;
				posV1++;
			}
		}printf("\n");
		for(i = 0; i < posV0; i++){
			printf("%d\n", vt0[i]);
		}printf("\n");
		for(i = 0; i < posV1; i++){
			printf("%d\n", vt1[i]);
		}

	}

	return 0;
}
