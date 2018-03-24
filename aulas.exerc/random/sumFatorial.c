#include <stdio.h>
int main(){

	long long int valor,count,fatorial,resultado,fatorialTotal;

	printf("aguarde...\n");	

	valor = 1;
	count = 1;
	while(valor <= 20){
		
		while(count <= valor){
			if(count == 1){
				fatorial = valor * count;
				resultado = fatorial * count;	
				count++;	
		}else{
			resultado = resultado * count;
			count++;
			}
		}

			if(valor == 1){
				fatorialTotal = resultado;
				valor++;
				}else{
					fatorialTotal = fatorialTotal + resultado;
					valor++;				
				}
			}
		
	printf("A soma dos fatoriais de 1 a 20 eh : %lli\n", fatorialTotal);

	return 0;
}
