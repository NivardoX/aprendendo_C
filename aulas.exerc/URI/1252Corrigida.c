#include <stdio.h>
#include <stdlib.h>
#define tam 10001
int main(){

	int vt02[tam], posV02, vA02;
	int vt01[tam], posV01, vA01;
	int vt0[tam], posV0, vA0;
	int vt1[tam], posV1, vA1;
	int vt2[tam], posV2, vA2;

	int i,v,n,m,j,k;
	int absV, absVA;

	int vtTest[tam],posTest;
	

	while(scanf("%d %d",&n,&m), n!=0 && m!=0){
		k = n;
	
		posV02 = 0;
		posV01 = 0;
		posV0 = 0;
		posV1 = 0;
		posV2 = 0;
	
		posTest = 0;
				
		

		
		while(k--){

			scanf("%d", &v);
			
			if(v%m == 0){ // modulo 0;
				if(posV0 == 0){
					vt0[0] = v;		
				}else{
					i = posV0 - 1;
					while(i >= 0){
						//sort
						if(abs(vt0[i])%2 == 0 && abs(v)%2 == 1){
							vt0[i+1] = vt0[i];						
							i--;
						}else if(abs(vt0[i])%2 == 0 && abs(v)%2 == 0 && vt0[i] > v){
							vt0[i+1] = vt0[i];						
							i--;
						}else if(abs(vt0[i])%2 == 1 && abs(v)%2 == 1 && vt0[i] < v){
							vt0[i+1] = vt0[i];						
							i--;
						}else{
							break;
						}
					}
					vt0[i+1] = v;	
				}
				posV0++;
			} else { //modulo 1

				vtTest[posTest] = v;
				posTest++;


			}





		}printf("%d %d", n, m);
		printf("\n\n");
		for(i = 0; i < posV0; i++){
			printf("%d\n", vt0[i]);
		}printf("\n");
		for(i = 0; i < posTest; i++){
			printf("%d\n", vtTest[i]);
		}printf("\n");

	}
	return 0;
}
