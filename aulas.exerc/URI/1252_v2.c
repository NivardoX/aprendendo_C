#include <stdio.h>
int main(){

	int vt0[10001], vt1[10001], vt2[10001];
	int i,posV0,posV1,posV2,n,m,vA_0,vA_1,vA_2,v,j;


	while(scanf("%d %d",&n,&m), n!=0 && m!=0){

		j = n;	
		posV0 = 0;
		posV1 = 0;
		posV2 = 0;
				
		
		while(j--){
			scanf("%d", &v);
			if(v%m == 0){ //atribuicao de valores para modulos 0
				if(posV0 == 0){
					vt0[0] = v;
				}else{
					vA_0 = vt0[posV0-1];//valor do vetor na posicao anterior
					i = posV0 - 1;
					while(i >= 0){
						if(vA_0%2 == 0 && v%2 != 0){ //modudos iguais a 0, troca de par e impar
							vt0[i+1] = vt0[i];
							i--;
						} else if((vA_0%2 != 0 && v%2 != 0) && (v > vA_0)){ //modulos iguais a 0, troca de 2 numeros impares						
							vt0[i+1] = vt0[i];
							i--;
						} else if((vA_0%2 == 0 && v%2 == 0) && (v < vA_0)){ //modulos iguais a 0, troca de 2 numeros pares
							vt0[i+1] = vt0[i];
							i--;					
						} else{
							 break;
		  				}
				 	}
					vt0[i+1] = v;
			 	}
				posV0++;

			} else if(v%m == 1){
				if(posV1 == 0){
					vt1[0] = v;
				}else{
					vA_1 = vt1[posV1-1];//valor do vetor na posicao anterior
					i = posV1 - 1;
					while(i >= 0){
						if(vA_1%2 == 0 && v%2 != 0){ //modudos iguais a 1, troca de par e impar
							vt1[i+1] = vt1[i];
							i--;
						} else if((vA_1%2 != 0 && v%2 != 0) && (v > vA_1)){ //modulos iguais a 1, troca de 2 numeros impares						
							vt1[i+1] = vt1[i];
							i--;
						} else if((vA_1%2 == 0 && v%2 == 0) && (v < vA_1)){ //modulos iguais a 1, troca de 2 numeros pares
							vt1[i+1] = vt1[i];
							i--;					
						} else{
							 break;
		  				}
				 	}
					vt1[i+1] = v;
			 	}
				posV1++;

			}else if(v%m > 1){
				if(posV2 == 0){
					vt2[0] = v;
				}else{
					vA_2 = vt2[posV2-1];//valor do vetor na posicao anterior
					i = posV2 - 1;
					while(i >= 0){
						if(vA_2%2 == 0 && v%2 != 0){ //modudos maiores q 1, troca de par e impar
							vt2[i+1] = vt2[i];
							i--;
						} else if((vA_2%2 != 0 && v%2 != 0) && (v > vA_2)){ //modulos maiores q 1, troca de 2 numeros impares						
							vt2[i+1] = vt2[i];
							i--;
						} else if((vA_2%2 == 0 && v%2 == 0) && (v < vA_2)){ //modulos maiores q 1, troca de 2 numeros pares
							vt2[i+1] = vt2[i];
							i--;					
						} else{
							 break;
		  				}
				 	}
					vt2[i+1] = v;
			 	}
				posV2++;

			}

		}printf("%d %d\n", n, m);
		for(i = 0; i < posV0; i++){
			printf("%d\n", vt0[i]);
		}
		for(i = 0; i < posV1; i++){
			printf("%d\n", vt1[i]);
		}
		for(i = 0; i < posV2; i++){
			printf("%d\n", vt2[i]);
		}

	}

	return 0;
}
