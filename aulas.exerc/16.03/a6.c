#include <stdio.h>
#include <string.h>

int main(){

char a[100];
char b[100];
char c[100];
char d[100];

printf("digite 4 strings para verificar se estao ordenadas alfabeticamente\n");
scanf("%s %s %s %s", a, b, c, d);

int e = strcmp(a,b);
int f = strcmp(b,c);
int g = strcmp(c,d);


	if(e < 0 && f < 0 && g < 0){
		printf("A ordem esta correta\n");
		}else {
			printf("A ordem esta incorreta\n");		
}

	return 0;
}
