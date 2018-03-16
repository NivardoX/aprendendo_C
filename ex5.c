#include <stdio.h>
#include <string.h>
int main(){

char a[100];
char b[100];
char c[100];
char d[100];

printf("Digite 4 strings!\n");
scanf("%s %s %s %s", a, b, c, d);

	if(strlen(a) < strlen(b) && strlen(b) < strlen(c) && strlen(c) < strlen(d)){
		printf("A ordem de tamanhos esta correta!\n");
}else {
	printf("A ordem esta incorreta!\n");
}


	return 0;
}
