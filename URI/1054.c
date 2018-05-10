#include <stdio.h> //timelimit

int main(){

	int t,n,i,toggle;
	unsigned long long int m,d;
	unsigned long long int maiorIda,maiorVolta,menorVolta,sIda,sVolta;
	char tipo;

	scanf("%d", &t);

	for(i = 0; i < t; i++){
		scanf("%d %llu", &n, &d);

		maiorIda = 0;
		menorVolta = 0;
		toggle = 0;
		sIda = 0;
		sVolta = 0;

		while(n--){
			getchar();
			scanf("%c-%llu", &tipo, &m);
			
			// pedra BIG
			if( tipo == 'B'){
				toggle = 0;
				if(m - sIda > maiorIda){
					maiorIda = m-sIda;
				}					
				sIda = m;
				if(m - sVolta > maiorVolta){
					maiorVolta = m-sVolta;
				}
				sVolta = m;
			}		
			// pedra SMALL
			if( tipo == 'S'){
				if(toggle % 2 == 0){
					if(m-sVolta > maiorVolta){
						maiorVolta = m-sVolta;
					}			
					sVolta = m;
				}else{
					if(m - sIda > maiorIda){
						maiorIda = m-sIda;						
					}		
					sIda = m;
				}
				toggle++;
			}
		}

		if(d-sIda > maiorIda){
			maiorIda = d-sIda;
		}
		if(d-sVolta > maiorVolta){
			maiorVolta = d -sVolta;
		}			
		printf("Case %d: %llu\n", i+1, (maiorIda > maiorVolta ? maiorIda : maiorVolta));
	}

	return 0;
}
