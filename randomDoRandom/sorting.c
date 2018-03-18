#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	char resposta;
	int r0 = 0;
	int r1 = 0;
	int r2 = 0;
	int r3 = 0;
	int r4 = 0;
	int r5 = 0;
	int r6 = 0;
	int r7 = 0;
	int r8 = 0;
	int r9 = 0;
	int r10 = 0;
	int r11 = 0;
	int r12 = 0;
	int r13 = 0;
	int r14 = 0;
	int r15 = 0;
	
	printf("Calcular y/n?\n");
	scanf("%c", &resposta);
	
	if(resposta == 'y'){
	    int i, n;
   		time_t t;
   
   		n = 10000;
   
   	
   		srand((unsigned) time(&t));

	   
   		for( i = 0 ; i < n ; i++ ) {
      	int sort = rand() % 16;
		//printf("%d\n", sort);
		
		switch(sort){
			case 0:	
				r0++;
			break;
			
			case 1:	
				r1++;
			break;
			
			case 2:	
				r2++;
			break;
			
			case 3:	
				r3++;
			break;
			
			case 4:	
				r4++;
			break;
			
			case 5:	
				r5++;
			break;
			
			case 6:	
				r6++;
			break;
			
			case 7:	
				r7++;
			break;
			
			case 8:	
				r8++;
			break;
			
			case 9:	
				r9++;
			break;
			
			case 10:	
				r10++;
			break;
			
			case 11:	
				r11++;
			break;
			
			case 12:	
				r12++;
			break;
			
			case 13:	
				r13++;
			break;
			
			case 14:	
				r14++;
			break;
			
			case 15:	
				r15++;
			break;
			
		}
		
   }
}

printf("0 %d vezes\n1 %d vezes\n2 %d vezes\n3 %d vezes\n4 %d vezes\n5 %d vezes\n6 %d vezes\n7 %d vezes\n8 %d vezes\n9 %d vezes\n10 %d vezes\n11 %d vezes\n12 %d vezes\n13 %d vezes\n14 %d vezes\n15 %d vezes\n", r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15);
	return 0;
}
