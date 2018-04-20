#include <stdio.h>
#define tam 100000
int main(){

	int parPos,impPos,vtP[tam],vtI[tam];
	int n,i,v,aux;

	scanf("%d", &n);

	vtP[0] = 0;
	vtI[0] = 0;
	parPos = 0;
	impPos = 0;

	while(n--){
		scanf("%d", &v);
	
		if(v % 2 == 0){
			vtP[parPos] = v;
			i = parPos;

			for(i; i > 0; i--){
				if(vtP[i] < vtP[i-1]){
					aux = vtP[i];
					vtP[i] = vtP[i-1];
					vtP[i-1] = aux;
				}else{
					break;			
				}
			}
			parPos++;

		} else{
			vtI[impPos] = v;
			i = impPos;

			for(i; i > 0; i--){
				if(vtI[i] > vtI[i-1]){
					aux = vtI[i];
					vtI[i] = vtI[i-1];
					vtI[i-1] = aux;
				}else{
					break;			
				}
			}

			impPos++;
		}	

	}
	for(i = 0; i < parPos; i++){
		printf("%d\n", vtP[i]);
	}
	for(i = 0; i < impPos; i++){
		printf("%d\n", vtI[i]);
	}


	return 0;
}
