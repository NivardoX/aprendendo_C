#include <stdio.h>
int main(){

	int parPos,impPos,vtP[10000],vtI[10000];
	int n,i,v,aux;

	scanf("%d", &n);

	vtP[0] = 0;
	vtI[0] = 0;
	parPos = 1;
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


		
		}	

	}
	printf("\n");
	for(i = 0; i < parPos; i++){
		printf("%d\n", vtP[i]);
	}


	return 0;
}
