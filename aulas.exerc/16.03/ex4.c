#include <stdio.h>
#include <string.h>
int main(){

char a[100];
char b[100];
char c[100];
char d[100];
char ax[100];

printf("Digite 4 strings!\n");
scanf("%s %s %s %s", a, b, c, d);


	if(strlen(a) > strlen(b)){
		strcpy(ax, a);
		strcpy(a, b);
		strcpy(b, ax);  
	}

	if(strlen(a) > strlen(c)){
		strcpy(ax, c);
		strcpy(c, a);
		strcpy(a, ax);
	}

	if(strlen(a) > strlen(d)){
		strcpy(ax, d);
		strcpy(d, a);
		strcpy(a, ax);
	}

	if(strlen(b) > strlen(c)){
		strcpy(ax, b);
		strcpy(b, c);
		strcpy(c, ax);
	}	

	if(strlen(b) > strlen(d)){
		strcpy(ax, b);
		strcpy(d, b);
		strcpy(d, ax);
	}	

	if(strlen(c) > strlen(d)){
		strcpy(ax, d);
		strcpy(d, c);
		strcpy(c, ax);
	}	


printf("A ordem por tamanho eh %s %s %s %s\nls", a, b, c, d); //teste de entrada


		return 0;
}
