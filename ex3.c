#include <stdio.h>
#include <string.h>
int main(){

	char a[100];
	char b[100];
	char c[100];
	char d[100];
	char ax[100];	
	

	
	printf("DIgite 4 palavras\n");
	scanf("%s %s %s %s", a, b, c, d);
		
	int ab = strcmp(a, b); 
	int ac = strcmp(a, c)	;
	int ad =  strcmp(a, d);
	int bc = strcmp(b, c);
	int bd = strcmp(b, d);
	int cd = strcmp(c, d);

	if(ab > 0){
		strcpy(ax, a) ;
		strcpy(a, b);
		strcpy(b, ax);  
	}

	if(ac > 0){
		strcpy(ax, c);
		strcpy(c, a);
		strcpy(a, ax);
	}

	if(ad > 0){
		strcpy(ax, d);
		strcpy(d, a);
		strcpy(a, ax);
	}

	if(bc > 0){
		strcpy(ax, b);
		strcpy(b, c);
		strcpy(c, ax);
	}	

	if(bd > 0){
		strcpy(ax, b);
		strcpy(d, b);
		strcpy(d, ax);
	}	

	if(cd > 0){
		strcpy(ax, d);
		strcpy(d, c);
		strcpy(c, ax);
	}	



	printf("test %d %d\nas palavras foram %s %s %s %s\n", ab, ac, a, b, c, d);

	return 0;
}
