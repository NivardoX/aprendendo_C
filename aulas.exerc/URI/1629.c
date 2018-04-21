#include<stdio.h>
#include<string.h>
int main(){
	int n,i,soma,d0,d1;
	char entrada[1001];

	while(scanf("%d", &n), n != 0 && n < 26 && n > 0){
	
		while(n--){
		
			soma = 0;
			d0 = 0;
			d1 = 0;


			scanf("%s", entrada);
			printf("entrda = %s\n ", entrada);

			for(i = 0; i < strlen(entrada);i+=2){	
				d0 += entrada[i] - '0';				
			}		
			for(i = 1; i < strlen(entrada);i+=2){	
				d1 += entrada[i] - '0';				
			}

			printf("%d, %d\n",d0,d1);

			while(d0 > 0){
				soma += d0%10;
				d0 = d0/10;
			}			
			while(d1 > 0){
				soma += d1%10;
				d1 = d1/10;
			}
		
			printf("%d\n",soma);

		}	
	}
	
	return 0;
}
