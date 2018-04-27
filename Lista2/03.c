#include <stdio.h>
int main(){
	
	int a, b, aux;
	
	while(1){

		printf("Digite 2 valores\n");
		scanf("%d %d",&a,&b);
		aux = a;
		a = a & 0;
		a = a | b;
		b = b & 0;
		b = b | aux;	

		printf("%d %d\n",a,b);

	}
	return 0;
}
