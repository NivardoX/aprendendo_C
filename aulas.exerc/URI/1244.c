#include <stdio.h>
int main(){
	int aux,n,k,i,vtI[50],vtT[50],j,p;
	char str[2601];
	scanf("%d", &n);	
	while(n--){
		getchar();		
		scanf("%[^\n]s", str);
		for(i = 0; i < 50; i++){
			vtT[i] = 0;	
		}
		vtT[0] = 1;
		vtI[0] = 1;//problema qnd primeiro caracter é espaco
		i = 1;
		j = 1;
		p = 0;
		while(str[i] != '\0'){
			if(str[i] != ' '){
				vtT[p] += 1;
			}	else{
					vtI[j] = i + 2;
					j++,p++;			 
				}
			i++;
		}
		for(k = 0; k < p; k++){
			for(i = 0; i < p; i++){
				if(vtT[i] < vtT[i+1]){
					aux = vtT[i];
					vtT[i] = vtT[i+1];
					vtT[i+1] = aux;
					aux = vtI[i];
					vtI[i] = vtI[i+1];
					vtI[i+1] = aux;
				}
			}
		}				
	 	for(i = 0; i < p+1; i++){
			k = vtI[i] - 1;
			while(str[k] != ' ' && str[k] != '\0'){
				printf("%c", str[k]);
				k++;
			}
			printf(" ");
		}
		printf("\n");
	}
   return 0;
}
