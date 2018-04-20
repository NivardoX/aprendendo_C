#include <stdio.h>//unfinished
int main(){
	
	int n,m,i,k,vt[100000],aux;
	
	while(scanf("%d %d",&n,&m), n != 0 && m != 0){
		
		for(i = 0; i < n; i++){				
			scanf("%d", &vt[i]);	
		}

		for(i = 0; i < n; i++){
			for(k = i+1; k < n; k++){
	
				if(vt[i]%m > vt[k]%m){//ascendente por modulo
					aux = vt[i];
					vt[i] = vt[k];
					vt[k] = aux;

				}else if(vt[i]%m == vt[k]%m){
					if(vt[i]%2 == 0 && vt[k]%2 == 1){
						//troca impar na frente
						aux = vt[i];
						vt[i] = vt[k];
						vt[k] = aux;

					}else if(vt[i]%2 == 1 && vt[k]%2 == 1 && vt[i] < vt[k]){
						//troca 2 impares, maior na frente
						aux = vt[i];
						vt[i] = vt[k];
						vt[k] = aux;
		
					}else if(vt[i]%2 == 0 && vt[k]%2 == 0 && vt[i] > vt[k]){
						//troca 2 pares, menor na frente
						aux = vt[i];
						vt[i] = vt[k];
						vt[k] = aux;
					}				
				}			
			}

		}
		printf("%d %d\n",n,m);
		for(i = 0; i < n; i++){
			printf("%d\n", vt[i]);
		}

	}
	

	return 0;
}
