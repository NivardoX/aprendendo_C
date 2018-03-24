#include <stdio.h>


int main(){

	int div,n,y,pos,v,vM,vm,aux,media,total;

	printf("digite a quantidade de numeros a serem processados!\n");
	scanf("%d", &n);

	div = 0;	
	total = 0;
	pos = 1;
	y = 0;
	while(y < n){
		printf("digite o %d valor!\n", pos);		
		scanf("%d",&v);
		y++;
		pos++;
		div++;

		total =	total + v;
		media = total / div;
		 

		if(y == 1){
			vM = v;
			vm = v;
			aux = v;
	}else{
		if(v >= vM){
			aux = vM;
			vM = v;		
	}	
		if(v <= vm && v <= aux){
			vm = v;
	}
		if(v <= vm){
			vm = v;	
	}
}

	printf("O maior valor eh : %d\nO menor valor eh : %d\nA media dos %d valores inseridos eh : %d\n", vM, vm,div,media);
}

	

//	printf("y = %d\npos = %d\nn = %d\n", y, pos, n);

	return 0;
}
