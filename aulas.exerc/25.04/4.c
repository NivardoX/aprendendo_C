#include <stdio.h>
#include <string.h>

char string[101];

int troca(int i, int n);

int main(){

	scanf("%s", string);

	troca(0,strlen(string));

	return 0;
}


int troca(int i, int n){
	char aux;
	
	if(i == n || i > n){
		printf("%s\n", string);
	}else{
		aux = string[i];
		string[i] = string[n];
		string[n] = aux;
		i++;
		n--;
		troca(i,n);
	}

	return 1;	
}
