#include <stdio.h>
int main(){

	int i,v,sum = 0;
	
	printf("Digite um valor\n");
	scanf("%d", &v);	

	for(i = 0; i < (sizeof(v)*8);i++){
		if((v & 1)%2 == 1){
			sum++;	
		}
		v = v >> 1;
	}

	printf("O total de bits 1 eh %d\n", sum);

	return 0;
}
