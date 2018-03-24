#include <stdio.h>


int main(){

	int n,y,pos,v,vM,vm,aux;

	printf("digite a quantidade de numeros a serem processados!\n");
	scanf("%d", &n);
	
	pos = 1;
	y = 0;
	while(y < n){
		printf("digite o %d valor!\n", pos);		
		scanf("%d",&v);
		y++;
		pos++; 
		
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

	printf("O maior valor eh : %d\nO menor valor eh : %d\n", vM, vm);
}

	

//	printf("y = %d\npos = %d\nn = %d\n", y, pos, n);

	return 0;
}
