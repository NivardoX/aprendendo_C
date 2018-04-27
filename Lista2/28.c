#include <stdio.h>

int neg(int x);

int main(){
	
	int n;

	printf("Digite um valor para ser verificado!\n");
	scanf("%d", &n);
	
	printf("Retorno : %d\n", neg(n));

	return 0;
}

int neg(int x){

	if(x == 0){
		return 0;
	}else{
		x = (x <= 0 ? -1 : 1);
	}

	return x;
}
