#include <stdio.h>
int main(){

	int vt[100000],j,i, n,aux;

	scanf("%d", &n);

	for(j = 0; j < n; j++){
		scanf("%d", &vt[i]);

        i = j;
        if(i != 0 && vt[i]% 2 == 0){
            while(i != 0 &&(vt[i-1]%2 == 1 || vt[i-1] > vt[i])){ 
    			aux = vt[i]; 
    			vt[i] = vt[i-1];
    			vt[i-1] = aux;
    	        i--;
    		}
        }
		
		i = j;
		if(i != 0 && vt[i]% 2 == 1){
    		while(i != 0 && vt[i-1]%2 == 1 && vt[i-1] < vt[i]){
    	        aux = vt[i];
    			vt[i] = vt[i-1];
    			vt[i-1] = aux;
    		    i--;
    		}
		}
	}
    
    printf("\n");
	for(i = 0 ; i < n; i++){
		printf("%d\n", vt[i]);
	}
	printf("\n");


	return 0;
}
