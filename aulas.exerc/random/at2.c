#include <stdio.h>

	int main(){
	
	int N,v,vM,vm,vme,aux,i;

	printf("Digite o numero de valores a ser processados!\n");
	scanf("%d", &N);
	
	vM = 0;
	vm = 0;
	vme = 0;

	for(i = 1; i <= N; i++){	
		printf("DIgite o valor a ser processado\n");
		scanf("%d", &v);
		
	if(i = 1){
		vM = v;
		vm = v;
	}
		if(v > vM){			
		vM = v;
	}
		 if(v < vm){
		vm = v;
	}

		printf("O Maior é %d\nO menor é %d\nA média é %d\n",vM,vm,aux);
}
	





	return 0;
}
