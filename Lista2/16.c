#include <stdio.h>

long double fat(long double x);

int main(){
	
	long double n,i;

	n = 0;
	for(i = 1; i <= 5;i++){
		n+= i/fat(i*2);
	}
	
	printf("O valor de S para 5 termos eh %Lf\n",n);

	return 0;
}



long double fat(long double x){
	long double f = 1;

	while(x > 0){
		f *= x;
		x--;
	}	

	return f;
}
