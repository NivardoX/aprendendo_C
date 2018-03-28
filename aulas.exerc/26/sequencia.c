#include <stdio.h>
int main(){

	int i,i1,v,k;
	
	printf("Digite um inteiro!\n");
	scanf("%d", &v);
	
	k = 1;
	i = 1;
	while(i <= v){
		if(i == 1){
			printf("%d\n", i);
			k++;
	}else {
		i1 = 1;
		while(i1 <= i){
			printf("%d ", k);
			i1++;
			k++;
		}
		printf("\n");	
	}		
		i++;
}

	i-=2;			//decremento p/ funcao
	while(i >= 1){	//decrescente
		if(i == 1){
			printf("%d\n",k);

	}else {
		i1 = 1;
		while(i1 <= i){			
			printf("%d ",k);
			i1++;
			k++;
		}
		printf("\n");	

	}
		i--;
} 





	printf("end");
	return 0;
}
