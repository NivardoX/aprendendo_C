#include <stdio.h>
int main(){
	int i,i2,n;
	n = 0;
	i2= 0;
	for(i = 0; i <= 50; i++, i2+=2){
		n+= i2;	
	}	

	printf("A soma dos 50 primeiros numeros pares eh %d\n", n);
	
	return 0;
}
