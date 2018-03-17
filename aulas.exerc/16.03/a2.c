#include <stdio.h>
#include <string.h>

int main(){

char a[100];
char b[100];
char c[100];
char d[100];
char ax[100];

printf("Digite 4 strings\n");
scanf("%s %s %s %s", a, b, c, d);
printf("As strings digitadas foram %s, %s, %s e %s\n", a, b, c, d);
	if(strlen(a) > strlen(b)){
		strcpy(ax, a);
		strcpy(a, b);
		strcpy(b, ax);
}
	if(strlen(a) > strlen(c)){
		strcpy(ax, a);
		strcpy(a, c);
		strcpy(c, ax);
}
	if(strlen(a) > strlen(d)){
		strcpy(ax, a);
		strcpy(a, d);
		strcpy(d, ax);
}
	if(strlen(b) > strlen(c)){
		strcpy(ax, b);
		strcpy(b, c);
		strcpy(c, ax);
}
	if(strlen(b) > strlen(d)){
		strcpy(ax, b);
		strcpy(b, d);
		strcpy(d, ax);
}
	if(strlen(c) > strlen(d)){
		strcpy(ax, c);
		strcpy(c, d);
		strcpy(d, ax);
}


printf("As frases digitadas em ordem foram por quantidade de caracteres foram!\n%s\n%s\n%s\n%s\n", a, b, c, d);

	return 0;
}
