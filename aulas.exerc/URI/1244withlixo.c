#include <stdio.h>
int main(){
	
	int aux,n,k,i,vtI[50],vtT[50],j,p;
	char str[51];

	scanf("%d", &n);//quantidade de casos
	
	while(n--){
		getchar();		
		scanf("%[^\n]s", str); // string a ser testada


		for(i = 0; i < 50; i++){ //atribuir 0 a vetor tamanho
			vtT[i] = 0;	
		}
		vtT[0] = 1;
		vtI[0] = 1;
		i = 1;
		j = 1;
		p = 0;
		while(str[i] != '\0'){ // atribuicao para vetores de acordo com indice e tamanho
			if(str[i] != ' '){
				vtT[p] += 1;//tamanho
			}	else{
					vtI[j] = i + 2;//indice
					j++,p++;			 
				}
			i++;
		}


		//test
		printf("%s\n", str);

		for(i = 0; i < j; i++){
			printf("%d, ", vtI[i]);
		}
		printf("\n");
		for(i = 0; i < j; i++){
			printf("%d, ", vtT[i]);
		}
		printf("\n\n");




		for(k = 0; k < p; k++){//ordernar vetT, e realizar msm ordenacao em vetI
			for(i = 0; i < p; i++){
				if(vtT[i] > vtT[i+1]){//ordem de tamanhos
					aux = vtT[i];//troca de vtT
					vtT[i] = vtT[i+1];
					vtT[i+1] = aux;
					
					aux = vtI[i];//troca de vtI
					vtI[i] = vtI[i+1];
					vtI[i+1] = aux;
				}
			}
		}

	printf("\n\n");
	for(i = 0; i < 4; i++){
		k = vtI[i] - 1;
		while(k < vtT[i]){
			if(str[k] != ' '){
				printf("%c", str[k]);		
			}
			k++;
		}
		printf(" ");
	}
	printf("\n\n");


	
	//test
	printf("%s\n", str);

	for(i = 0; i < j; i++){
		printf("%d, ", vtI[i]);
	}
	printf("\n");
	for(i = 0; i < j; i++){
		printf("%d, ", vtT[i]);
	}
	printf("\n");
	printf("%c\n", str[0]);



	}	



 

   return 0;
}
