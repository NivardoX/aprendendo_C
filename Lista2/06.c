#include <stdio.h>
int main(){
	int i;
	printf("For:\n");
	for(i = 1; i <= 100; i++){
		printf("%d ",i);
	}
	printf("\nWhile:\n");
	i = 1;
	while(i <= 100){
		printf("%d ",i);
		i++;
	}
	printf("\nDo While:\n");

	i = 1;
	do{	
		printf("%d ",i);
		i++;
	}while(i <= 100);
	printf("\n");	

	return 0;
}
