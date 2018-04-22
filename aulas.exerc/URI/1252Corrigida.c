#include <stdio.h>
#include <stdlib.h>
#define tam 10001
int main(){

	int vt02[tam], posV02, vA02;
	int vt01[tam], posV01, vA01;
	int vt0[tam], posV0, vA0;
	int vt1[tam], posV1, vA1;
	int vt2[tam], posV2, vA2;

	int i,v,n,m,j;
	int absV, absVA;

	while(scanf("%d %d",&n,&m), n!=0 && m!=0){
		j = n;
	
		posV02 = 0;
		posV01 = 0;
		posV0 = 0;
		posV1 = 0;
		posV2 = 0;
		
		while(j--){

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

			}else if(v%m == 1){ // modulo 1;
				if(posV1 == 0){
					vt1[0] = v;		
				}else{
					i = posV1 - 1;
					while(i >= 0){
						//sort
						if(abs(vt1[i])%2 == 0 && abs(v)%2 == 1){
							vt1[i+1] = vt1[i];						
							i--;
						}else if(abs(vt1[i])%2 == 0 && abs(v)%2 == 0 && vt1[i] > v){
							vt1[i+1] = vt1[i];						
							i--;
						}else if(abs(vt1[i])%2 == 1 && abs(v)%2 == 1 && vt1[i] < v){
							vt1[i+1] = vt1[i];						
							i--;
						}else{
							break;
						}
					}
					vt1[i+1] = v;	
				}
				posV1++;
			
			}else if(v%m > 1){ // modulo maior q 1;
				if(posV2 == 0){
					vt2[0] = v;		
				}else{
					i = posV2 - 1;
					while(i >= 0){
						//sort
						if(vt2[i]%m > v%m){
							vt2[i+1] = vt2[i];						
							i--;
						}else if(vt2[i]%m < v%m){
							break;					
						}else if(abs(vt2[i])%2 == 0 && abs(v)%2 == 1){
							vt2[i+1] = vt2[i];						
							i--;
						}else if(abs(vt2[i])%2 == 0 && abs(v)%2 == 0 && vt2[i] > v){
							vt2[i+1] = vt2[i];						
							i--;
						}else if(abs(vt2[i])%2 == 1 && abs(v)%2 == 1 && vt2[i] < v){
							vt2[i+1] = vt2[i];						
							i--;
						}else{
							break;
						}
					}
					vt2[i+1] = v;	
				}
				posV2++;

			}else if(v%m == -1){ // modulo -1;
				if(posV01 == 0){
					vt01[0] = v;		
				}else{
					i = posV01 - 1;
					while(i >= 0){
						//sort
						if(abs(vt01[i])%2 == 0 && abs(v)%2 == 1){
							vt01[i+1] = vt01[i];						
							i--;
						}else if(abs(vt01[i])%2 == 0 && abs(v)%2 == 0 && vt01[i] < v){
							vt01[i+1] = vt01[i];						
							i--;
						}else if(abs(vt01[i])%2 == 1 && abs(v)%2 == 1 && vt01[i] > v){
							vt01[i+1] = vt01[i];						
							i--;
						}else{
							break;
						}
					}
					vt01[i+1] = v;	
				}
				posV01++;
			
			}else { // modulo menor q -1;
				if(posV02 == 0){
					vt02[0] = v;		
				}else{
					i = posV02 - 1;
					while(i >= 0){
						//sort
						if(vt02[i]%m > v%m){
							vt02[i+1] = vt02[i];						
							i--;
						}else if(vt02[i]%m < v%m){
							break;		
						}else if(abs(vt02[i])%2 == 0 && abs(v)%2 == 1){
							vt02[i+1] = vt02[i];						
							i--;
						}else if(abs(vt02[i])%2 == 0 && abs(v)%2 == 0 && vt02[i] < v){
							vt02[i+1] = vt02[i];						
							i--;
						}else if(abs(vt02[i])%2 == 1 && abs(v)%2 == 1 && vt02[i] > v){
							vt02[i+1] = vt02[i];						
							i--;
						}else{
							break;
						}
					}
					vt02[i+1] = v;	
				}
				posV02++;
			
			}

		}printf("%d %d\n", n, m);
		for(i = 0; i < posV02; i++){
			printf("%d\n", vt02[i]);
		}
		for(i = 0; i < posV01; i++){
			printf("%d\n", vt01[i]);
		}
		for(i = 0; i < posV0; i++){
			printf("%d\n", vt0[i]);
		}
		for(i = 0; i < posV1; i++){
			printf("%d\n", vt1[i]);
		}	
		for(i = 0; i < posV2; i++){
			printf("%d\n", vt2[i]);
		}

	}
	return 0;
}
