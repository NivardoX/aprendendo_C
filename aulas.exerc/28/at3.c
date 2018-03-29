#include <stdio.h>
int main(){

	int vt[10];
	int flag = 0,y,x,xPosic,xCount,xDesejado;

	for(y = 0; y <= 9; y++){
		printf("Digit o %d numero\n", y+1);
		scanf("%d", &vt[y]);
	}

	printf("Digite o valor a ser buscado\n");
	scanf("%d", &xDesejado);

	xCount = 0;
	while(xCount <= 10 && flag == 0){
		if(vt[x] == xDesejado){
			xPosic = x;
			flag = 1;
		}else{
			x++;
		}
		xCount++;
	}	
	

	if(flag == 1){
		printf("O valor desejado era %d.\nEle foi encontrado na %d posicao\n", xDesejado, xPosic+1);
	}else{
		printf("Valor nao encontrado\n");
	}
	
	printf("valores inseridos : ");
	for(y = 0; y <= 9; y++){
		printf("%d, ", vt[y]);
	}
	

	return 0;

}
