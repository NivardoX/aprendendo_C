#include <stdio.h>

int main(){

	int i,n,vt[65];

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%d", &vt[i]);
	}
	
	while(n--){

		for(i = 0; i < n; i++){
		
			if(vt[i] == vt[i+1]){
				vt[i] = 1;//preta
			}else{
				vt[i] = -1;//branca
			}		
		}		
	}
	
	printf("%s\n", (vt[0] == 1 ? "preta" : "branca"));

	return 0;
}
