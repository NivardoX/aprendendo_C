#include <stdio.h>
#include <math.h> // compilar usando gcc -o nome nome.c -lm
int main(){

	float a,b,c,d,r1,r2;
	float rd;

	printf("Insira os 3 coeficientes da equacao a ser calculada!\n");	
	printf("Digite o primeiro coeficiente!\n");
	scanf("%f", &a); 
	printf("Digite o segundo coeficiente!\n");
	scanf("%f", &b); 
	printf("Digite o terceiro coeficiente!\n");
	scanf("%f", &c); 

	d = (b*b) - (4*a*c);
	rd = sqrt(d); // <math.h>
	r1 = ((b * -1) + rd) / (2*a);		
	r2 = ((b * -1) - rd) / (2*a);

	if(d < 0){
		printf("Nao existem raizes reais\n");
}else{
	printf("A raiz positiva eh: %f e a raiz negativa eh: %f\n", r1, r2);
}

// 	printf("D = %f",d);

	return 0;
}
