#include <stdio.h>
int main() {

	int a;
	int b;
	int c;
	int d;
	int ax;

	printf("Digite os numeros a serem comparados!\n");
	scanf("%d %d %d %d", &a,&b,&c,&d);

	if(a > b){
		ax = a ;
		a = b;
		b = ax;  
	}

	if(a > c){
		ax = c;
		c = a;
		a = ax;
	}

	if(a > d){
		ax = d;
		d = a;
		a = ax;
	}

	if(b > c){
		ax = b;
		b = c;
		c = ax;
	}	

	if(b > d){
		ax = b;
		d = b;
		d = ax;
	}	

	if(c > d){
		ax = d;
		d = c;
		c = ax;
	}	






	printf("os numeros foram %d %d %d %d\nls", a, b, c, d); //teste de entrada

	return 0;
}
