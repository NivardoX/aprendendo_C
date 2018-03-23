#include <stdio.h>
#define TAM 1000

int main(){
	char str[TAM];
	int i,j;
	char aux;

	gets(str);

	for(j=0; str[j];j++);
	i = 0;

	for(; i<j;i++,j--){
		aux = str[i];
		str[i]=str[j];
		str[j]=aux;

}
	printf("%s", str);
	return 0;

}
