#include <stdio.h>


int vt[100];
vt[100] = {10,9,8,7,6,5,4,3,2,1};
int aux;
int ordenar(int pos);


int main(){
	int i;
	
	ordernar(9);
	
	for(i = 0; i < 10; i++){
		printf("%d, ", vt[i]);
	}
	
	return 0;
}

int ordernar(int pos){

	if(pos == 0){
		return 33;
	}else if(vt[pos] < vt[pos-1]){
		aux = vt[pos];
		vt[pos] = vt[pos-1];
		vt[pos-1] = aux;
		return ordernar(pos-1);
	}
	return 33;
}
