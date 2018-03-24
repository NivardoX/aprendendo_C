#include <stdio.h>

int main(){

	char str[100];
	int x,y;
	char aux;
	x = 0;

	printf("digite a string!\n");
	scanf("%s", str);

	while(str[x] != '\0'){
		x++;		
	}

//	while(y < x){
//		aux = str[x];
//		str[x] = str[y];
//		str[y] = aux;	
//		y++;
//		x--;
	}
	
	for(y = 0 ; y < x ; y++, x--){
		aux = str[x];
		str[x] = str[y];
		str[y] = aux;
	}

	printf("x eh %d\na string inversa eh %s\n", x, str);

return 0;
}
