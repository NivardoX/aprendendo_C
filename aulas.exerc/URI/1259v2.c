#include <stdio.h>
int main(){
	int vt[100000],j,i,n,aux;

	scanf("%d", &n);
	
	for(i = 0 ; i < n; i++){
		scanf("%d", &vt[i]);
		
		j = i;
		while(j != 0 && vt[j-1] > vt[j]){
			aux = vt[j];
			vt[j] = vt[j-1];
			vt[j-1] = aux;
			j--;
		}
	}	



	/*print do vetor para test
	for(i = 0; i < n; i++){
		printf("%d\n", vt[i]);		
	}
	printf("\n");
	*/


	for(i = 0; i < n; i++){
		if(vt[i]%2 == 0){
			printf("%d\n", vt[i]);
		}
	}

	for(n ; n > 0; n--){
		if(vt[n]%2 == 1){
			printf("%d\n", vt[n]);
		}
	}





	return 0;
}
