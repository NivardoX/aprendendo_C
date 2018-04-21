#include <stdio.h>
#define tam 100000
int main(){

	int parPos,impPos,vtP[tam],vtI[tam];
	int n,v,aux;

	scanf("%d", &n);

	parPos = 0;
	impPos = 0;

	while(n--){

		scanf("%d", &v);

		if(v % 2 == 0){

			if(parPos == 0){
				vtP[0] = v;

			} else{
				i = parPos - 1;

				while(i >= 0){

					if(vtP[i] > v){
						vtP[i+1] = vtP[i];
						i--;

					}else{
						break;

					 }
				}
				vtP[i+1] = v;
			}
			parPos++;
		
		} else{

			if(impPos == 0){
				vtI[0] = v;

			} else{
				i = impPos - 1;

				while(i >= 0){

					if(vtI[i] < v){
						vtI[i+1] = vtI[i];
						i--;

					}else{
						break;
					 }
				}
				vtI[i+1] = v;
			}
			impPos++;	
		}
	}

	for(i = 0; i < parPos; i++){
		printf("%d\n",vtP[i]);
	}

	for(i = 0; i < impPos; i++){
		printf("%d\n",vtI[i]);
	}

	return 0;
}
