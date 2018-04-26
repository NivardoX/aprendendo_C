#include <stdio.h>

int fib(int x);

int main(){
	
	int n,i;
	
	printf("Digite o valor!\n");
	scanf("%d", &n);
	
	i = 1;
	while(fib(i) <= n){
		printf("%d ", fib(i));
		i++;
	}
	printf("%d\n", fib(i));
	i++;

	
	return 0;
}

int fib(int x){
	
	if(x <= 2){
		return 1;	
	}else {
		return fib(x-1) + fib(x-2);
	}


	return x;
}
