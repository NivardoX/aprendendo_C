#include <stdio.h>
int main(){

	int vt[10];
	int flag = 0,y,x,xPosic,xCount,xDesejado;

	for(y = 0; y <= 9; y++){
		printf("Digit o %d numero\n", y);
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
//			if(xCount == 10 && flag ==0){
//				printf("Este valor nao foi encontrado\n");			
//				return 0;			
//			}else{
				x++;
//			}
	}
}
	
	if(xCount == 10 && flag == 0){
		return 0;
	}else{
		printf("O valor desejado era %d.\nEle foi encontrado na %d posicao\n", xDesejado, xPosic++);

}


	for(y = 0; y <= 9; y++){
		printf("%d, ", vt[y]);
}

	return 0;
}
