#include <stdio.h>
int main(){

	int vt[10];// = {5,3,7,2,9,0,1,4,6,8};
	int x, x1, aux, y;

	
	for(y = 0; y <= 9; y++){
		printf("digite vt %d\n", y);
		scanf("%d", &vt[y]);
		}
	
	x = 0;
	while(x < 9){
		x1 = x + 1;
		if(vt[x] >= vt[x1]){			
			aux = vt[x];
			vt[x] = vt[x1];
			vt[x1] = aux;
			x1++;
		}
		x++;
	}
	

	for(y = 0; y <= 9; y++){
		printf("%d, ", vt[y]);
	}
	
	return 0;
}
