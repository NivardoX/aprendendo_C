#include <stdio.h>

void mesExt(int x);
int dia, mes, ano;


int main(){
	
	printf("Digite a data!\n");
	scanf("%d", &dia);
	getchar();
	scanf("%d", &mes);
	getchar();
	scanf("%d", &ano);
	getchar();	

	mesExt(mes);	

	return 0;
}



void mesExt(int x){
	char mesE[101];
	
	if(x == 1){
		printf("%d de janeiro de %d\n",dia, ano);	
	}else if(x == 2){
		printf("%d de fevereiro de %d\n",dia, ano);
	}else if(x == 3){
		printf("%d de marco de %d\n", dia, ano);
	}else if(x == 4){
		printf("%d de abril de %d\n", dia, ano);	
	}else if(x == 5){
		printf("%d de maio de %d\n", dia, ano);
	}else if(x == 6){
		printf("%d de junho de %d\n", dia, ano);
	}else if(x == 7){
		printf("%d de julho de %d\n", dia, ano);
	}else if(x == 8){
		printf("%d de agosto de %d\n", dia, ano);
	}else if(x == 9){
		printf("%d de setembro de %d\n", dia, ano);
	}else if(x == 10){
		printf("%d de outubro de %d\n", dia, ano);
	}else if(x == 11){
		printf("%d de novembro de %d\n", dia, ano);
	}else if(x == 12){
		printf("%d de dezembro de %d\n", dia, ano);
	} 	


	return;
}
