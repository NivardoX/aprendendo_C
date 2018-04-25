#include <stdio.h>
int main(){
	int i,n,med,num;
	i = 10;
	printf("Digite 10 valores!\n");	
	med = 0;
	num = 0;
	while(i--){
		scanf("%d", &n);
		if(n >= 0){
			med+= n;
			num++;	
		}
	}	
	printf("A media aritmetica dos valores positivos digitados eh %d\n", med/num);
	
	return 0;
}
