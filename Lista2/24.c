#include <stdio.h>

int primo(int x);


int main(){

	unsigned i,out,n,soma;
	    
	soma = 0;
	printf("Digite o numero\n");
    scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		out = primo(i);		
		if(out == 1){
			soma+= i;		
		}
	}
	
	printf("A soma dos numeros primos entre 0 e %d, eh %d\n",n,soma);

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
