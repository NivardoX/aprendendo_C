#include <stdio.h>

int segundos(int hora, int minuto, int segundo);

int main(){
	int a,b,c;	

	printf("Digite hora minuto e segundo!\n");
	scanf("%d %d %d", &a,&b,&c);	

	printf("%d segundos ao todo\n", segundos(a,b,c));

	return 0;
}

int segundos(int hora, int minuto, int segundo){
	
	hora*= 3600;
	minuto*= 60;
	segundo+= hora + minuto; 

	return segundo;
}
