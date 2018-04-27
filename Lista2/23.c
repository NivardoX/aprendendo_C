#include <stdio.h>

int primo(int x);


int main(){

	int out,n;    

	printf("Digite o valor\n");
    scanf("%d", &n);
	
	out = primo(n);

	(out == 1 ? printf("eh primo\n") : printf("nao eh primo\n"));
    

    return 0;
}


int primo(int x){
	int i;
	int out = 1;
	
	for(i = 2; i < x ; i++){
		if(x%i == 0){
			out = 0;
			return out;	
		}
	}

	return out;
}
