#include <stdio.h>
int main(){

    int n;

    scanf("%d", &n);
    printf("%d,00 Reais\n", n);

	if(n/100 != 0){
    printf("%d nota(s) de R$ 100,00\n", n/100);
	}    
	n %= 100;
	if(n/50 != 0){
    printf("%d nota(s) de R$ 50,00\n", n/50);
	}    
	n %= 50;
	if(n/20 != 0){
    printf("%d nota(s) de R$ 20,00\n", n/20);
    }
	n %= 20;
	if(n/10 != 0){
    printf("%d nota(s) de R$ 10,00\n", n/10);
    }
	n %= 10;
	if(n/5 != 0){
    printf("%d nota(s) de R$ 5,00\n", n/5);
    }
	n %= 5;
	if(n/2 != 0){
    printf("%d nota(s) de R$ 2,00\n", n/2);
    }
	n %= 2;
	if(n != 0){
    printf("%d nota(s) de R$ 1,00\n", n);
	}

    return 0;
}
