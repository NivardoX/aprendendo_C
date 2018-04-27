#include <stdio.h>
int main(){

	int anos;
	float chico,ze;

	ze = 1.10;
	chico = 1.50;
	anos = 0;

	while(ze < chico){
		ze+= 0.03;
		chico+=0.02;
		anos++;
	}
	
	printf("Em %d anos, Chico tera %.2f metros e Ze %.2f metros\n", anos, chico, ze);

	return 0;
}
