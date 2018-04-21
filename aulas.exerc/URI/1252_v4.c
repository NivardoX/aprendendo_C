#include <stdio.h>//lixo merda da porra
#include <stdlib.h>
#define tam 10001
int main(){

	int vt02[tam], vt01[tam], vt0[tam], vt1[tam], vt2[tam];//vetores para casos
	int posV02,posV01,posV0,posV1,posV2,vA_02,vA_01,vA_0,vA_1,vA_2;	//contadores especificos e mantenedores de valor
	int i,v,j,n,m;//contadores e entradas


	while(scanf("%d %d",&n,&m), n!=0 && m!=0){
	
		j = n;	

		//zerando contadores
		posV02 = 0;
		posV01 = 0;
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
						if((abs(vA_0)%2 == 0) && (abs(v)%2 != 0)){ //modudos iguais a 0, troca de par e impar
							vt0[i+1] = vt0[i];
							i--;
						} else if((abs(vA_0)%2 != 0) && (abs(v)%2 != 0) && (v > vA_0)){ //modulos iguais a 0, troca de 2 numeros impares						
							vt0[i+1] = vt0[i];
							i--;
						} else if((abs(vA_0)%2 == 0) && (abs(v)%2 == 0) && (v < vA_0)){ //modulos iguais a 0, troca de 2 numeros pares
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
						if((abs(vA_1)%2 == 0) && (abs(v)%2 != 0)){ //modudos iguais a 1, troca de par e impar
							vt1[i+1] = vt1[i];
							i--;
						} else if((abs(vA_1)%2 != 0) && (abs(v)%2 != 0) && (v < vA_1)){ //modulos iguais a 1, troca de 2 numeros impares						
							vt1[i+1] = vt1[i];
							i--;
						} else if((abs(vA_1)%2 == 0) && (abs(v)%2 == 0) && (v > vA_1)){ //modulos iguais a 1, troca de 2 numeros pares
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
						if((vA_2%m) > (v%m)){//tamanho
							vt2[i+1] = vt2[i];
							i--;
						}else if((abs(vA_2)%2 == 0) && (abs(v)%2 != 0)){ //modudos maiores q 1, troca de par e impar
							vt2[i+1] = vt2[i];
							i--;
						} else if((abs(vA_2)%2 != 0) && (abs(v)%2 != 0) && (v < vA_2)){ //modulos maiores q 1, troca de 2 numeros impares						
							vt2[i+1] = vt2[i];
							i--;
						} else if((abs(vA_2)%2 == 0) && (abs(v)%2 == 0) && (v > vA_2)){ //modulos maiores q 1, troca de 2 numeros pares
							vt2[i+1] = vt2[i];
							i--;					
						} else{
							 break;
		  				}
				 	}
					vt2[i+1] = v;
			 	}
				posV2++;

//valores negativos, mudanca nas operacoes de relacao

			}else if(v%m == -1){
				if(posV01 == 0){
					vt01[0] = v;
				}else{		
					vA_01 = vt01[posV01-1];//valor do vetor na posicao anterior
					i = posV01 - 1;
					while(i >= 0){
						if((abs(vA_01)%2 == 0) && (abs(v)%2 != 0)){ //modudos iguais a -1, troca de par e impar
							vt01[i+1] = vt01[i];
							i--;
						} else if((abs(vA_01)%2 != 0) && (abs(v)%2 != 0) && (v > vA_01)){ //modulos iguais a -1, troca de 2 numeros impares						
							vt01[i+1] = vt01[i];
							i--;
						} else if((abs(vA_01)%2 == 0) && (abs(v)%2 == 0) && (v < vA_01)){ //modulos iguais a -1, troca de 2 numeros pares
							vt01[i+1] = vt01[i];
							i--;					
						} else{
							 break;
		  				}
				 	}
					vt01[i+1] = v;
			 	}
				posV01++;

			}else if(v%m < -1){
				if(posV02 == 0){
					vt02[0] = v;
				}else{
					vA_02 = vt02[posV01-1];//valor do vetor na posicao anterior
					i = posV02 - 1;
					while(i >= 0){
						if((vA_02%m) > (v%m)){//tamanho
							vt02[i+1] = vt02[i];
							i--;
						} else if((abs(vA_02)%2 == 0) && (abs(v)%2 != 0)){ //modudos menores q -1, troca de par e impar
							vt02[i+1] = vt02[i];
							i--;
						} else if((abs(vA_02)%2 != 0) && (abs(v)%2 != 0) && (v > vA_02)){ //modulos menores q -1, troca de 2 numeros impares						
							vt02[i+1] = vt02[i];
							i--;
						} else if((abs(vA_02)%2 == 0) && (abs(v)%2 == 0) && (v < vA_02)){ //modulos menores q -1, troca de 2 numeros pares
							vt02[i+1] = vt02[i];
							i--;					
						} else{
							 break;
		  				}
				 	}
					vt02[i+1] = v;
			 	}
				posV02++;
			} 
	
		}printf("\n%d %d\n", n, m);
		for(i = 0; i < posV02; i++){
			printf("%d\n", vt02[i]);
		}printf("\n");
		for(i = 0; i < posV01; i++){
			printf("%d\n", vt01[i]);
		}printf("\n");
		for(i = 0; i < posV0; i++){
			printf("%d\n", vt0[i]);
		}printf("\n");
		for(i = 0; i < posV1; i++){
			printf("%d\n", vt1[i]);
		}printf("\n");
		for(i = 0; i < posV2; i++){
			printf("%d\n", vt2[i]);
		}

	}

	return 0;
}
