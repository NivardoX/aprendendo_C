#include <stdio.h>
int main(){

	char vt[1000001];

	int i,n,m,a,b,h,e,r;
	char opc;

	while(scanf("%d %d",&n,&m)){
		
	for(i = 0; i < n; i++){
		vt[i] = 'h'; //redefinicao do vetor
	}	
		for(i = 0; i < m; i++){
			h = 0;
			e = 0;
			r = 0;
			getchar();
			scanf("%c %d %d", &opc, &a, &b);
		
			switch(opc){
				
					case 'C':
					//operacao de contagem
					a-=1;
					for(a; a < b; a++){
						if(vt[a] == 'h'){
							h++;
						}else if(vt[a] == 'e'){
							e++;
						}else{
							r++;
						}	
					}
					printf("%d %d %d\n",h,e,r);					
					break;

				case 'M':
					//operacao de mudanca
					a-=1;
					for(a; a < b; a++){
						if(vt[a] == 'h'){
							vt[a] = 'e';
						}else if(vt[a] == 'e'){
							vt[a] = 'r';
						}else{
							vt[a] = 'h';
						}	
					}					
					
					break;
				
				default:
					break;		
			}
		}
		printf("\n");
	}


	return 0;
}
