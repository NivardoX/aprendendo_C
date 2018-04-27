#include <stdio.h>
	
	int main(){
		
	long long int v1, v2, vP, vA, mult,maior = 0;
		
		for(v1 = 100; v1 < 999; v1++){
			for(v2 = 100; v2 < 999; v2++){
				vP = 0;
				mult = v1 * v2;
				vA = mult;
			
				while(mult > 0){
					vP = vP*10 + mult%10;
					mult = mult/10;	
				}
				if((vP == vA) && (vP >= maior)){
					maior = vA;
				}
			}	
		}
	
	printf("O maior palindromo eh %li\n", maior);
	
	return 0;
}
