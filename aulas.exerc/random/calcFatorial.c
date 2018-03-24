#include <stdio.h>
int main(){
	
	long long int valor,count,fatorial,resultado;

	printf("calcular a faltorial de : ");
	scanf("%lli", &valor);
	
	count = 1;

	while(count < valor){
		if(count == 1){
			fatorial = valor * count;
			resultado = fatorial * count;	
			count++;	
	}else{
		resultado = resultado * count;
		count++;
		}
	}

	printf("O fatorial de %lli, eh %lli\n", valor, resultado);

	return 0;
}
