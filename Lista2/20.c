#include <stdio.h>
int main(){

	float salario, aumento;
	int i;

	salario = 2000;
	aumento = 2000 * 0.015;
	i = 2018 - 1997;
	while(i--){
		salario+= aumento; 
		aumento*= 2;
	}

	printf("O salario atual eh %.2f reais\n", salario);

	return 0;
}
