#include <stdio.h> //timelimite error
int main(){	
	int n,m,i,k,vt[10001],aux;	
	while(scanf("%d %d",&n,&m), n != 0 && m != 0){	
		for(i = 0; i < n; i++){				
			scanf("%d", &vt[i]);	
		}
		for(i = 0; i < n; i++){
			for(k = i+1; k < n; k++){
				if(vt[i]%m > vt[k]%m){
					aux = vt[i];
					vt[i] = vt[k];
					vt[k] = aux;
				}else if(vt[i]%m == vt[k]%m){
					if(vt[i]%2 == 0 && vt[k]%2 != 0){
						aux = vt[i];
						vt[i] = vt[k];
						vt[k] = aux;
					}else if(vt[i]%2 != 0 && vt[k]%2 != 0 && vt[i] < vt[k]){
						aux = vt[i];
						vt[i] = vt[k];
						vt[k] = aux;
					}else if(vt[i]%2 == 0 && vt[k]%2 == 0 && vt[i] > vt[k]){
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
