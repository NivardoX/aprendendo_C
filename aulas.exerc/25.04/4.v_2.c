#include <stdio.h>
#include <string.h>

char string[101];

void troca();

int main(){

	scanf("%s", string);

	troca();

	return 0;
}

int i = 0;
int n = 9;
		
void troca(){
	char aux;
	
	if(i >= n){
		printf("%s\n", string);
		
		printf("%d %d\n",i,n);
	}else{
		aux = string[i];
		string[i] = string[n];
		string[n] = aux;
		i++;
		n--;
		troca();
	}

	return;	
}
