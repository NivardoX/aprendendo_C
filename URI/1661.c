#include <stdio.h>
#include <stdlib.h> 

int main(){

	int vt[100000];

	int n,i;
	long long int count;
	
	while(scanf("%i", &n), n){

		for(i = 0; i < n; i++){
			scanf("%i", &vt[i]);
		}
		count = 0;
		for(i = 1; i < n; i++){
			if(vt[i-1] < 0){
				count = count + abs(vt[i-1]);				
			}else{
				count+= vt[i-1];
			}
			vt[i]+= vt[i-1];
		}
		printf("%lli\n", count);
	}

	return 0;
}
