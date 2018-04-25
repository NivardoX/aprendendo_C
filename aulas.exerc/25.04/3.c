#include <stdio.h>


int sum(int vt[10], int n, int i, int soma);

int main(){
	int vt[10] = {10,10,10,10,10,10,10,10,10,10};

	int n,i;
	
	while(1){	
		printf("Digite N e I?\n");
		scanf("%d %d", &n, &i);

		printf("a soma eh %d\n",sum(vt,n,i,0));
	}
	return 0;
}



int sum(int vt[10], int n, int i, int soma){
	
	if(i == n){
		return soma+vt[i];	
	}else{
		sum(vt,n,i+1,vt[i] + soma);
	}


	return soma;
}
