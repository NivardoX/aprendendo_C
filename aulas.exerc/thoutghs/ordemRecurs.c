#include <stdio.h>


int vt[100];
vt[100] = {54,63,456,8675,45,654,78,56,476,764};
int aux;
int ordenar(int pos);


int main(){
	int i;

	i = 9;
	while(i--){
		ordernar(9);
	}
	
	for(i = 0; i < 10; i++){
		printf("%d, ", vt[i]);
	}
	
	return 0;
}

int ordernar(int pos){

	if(pos == 0){
		return 0;
	}else if(vt[pos] < vt[pos-1]){
		aux = vt[pos];
		vt[pos] = vt[pos-1];
		vt[pos-1] = aux;
		return ordernar(pos-1);
	}else{
		return ordernar(pos-1);
	}
	return 0;
}
