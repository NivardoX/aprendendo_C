#include <stdio.h> 
int main(){

	int v[1000];
//	int v[1000] = {0, 1, 2, 2, 4, 5};
	int p1 = 2;
	int p2 = 5;
	int i, j, vAux, nVet, nOpera;
	char opcao, resposta;


/*	valores p1, p2
	p1 posicao1
	p2 posicao2 */

	//tamanho do vetor
	printf("Digite a quantidade de subvetores: \n");
	scanf("%d", &nVet);
	//quantidade de operacoes
	printf("Digite a quantidade de operacoes a serem realizadas:\n");
	scanf("%d", &nOpera);

	//insercao de subvetores
	for(i = 0; i < nVet; i++){
		printf("Digite o %d subvetor:\n", i+1);
		scanf("%d", &v[i]);		
	}

	//condicional se nVet = 0
	if(nVet == 0){
		printf("tamanho de vetor invalido.\n");
	
	//condicional se valor de nOpera = 0
	}else if(nOpera == 0){
			printf("0 operacoes requisitadas.\n");
		}else{
			//loop para quantidadde de operacoes
			for(j = 0; j < nOpera; j++){
		
				//selecao de operacao
				printf("\nEscolha a operacao a ser realizada:\nU - Union\nF - Find\n");
				scanf(" %c", &opcao);
				printf("Opcao selecionada %c\n", opcao);

				//switch de casos	
				switch(opcao) {
				
				
					//case union
					case 'u':
						//union
							
						//selecao de valores a serem operados
						printf("Digite os valores a serem unidos.\n");
						printf("Digite o primeiro valor.\n");				
						scanf("%d", &p1);
						printf("Digite o segundo valor.\n");				
						scanf("%d", &p2);
						printf("Os valores escolhidos foram %d e %d.\n", p1, p2);
						
						//ajustar p1 e p2 com -1 para leitura correta de posicao
						p1 = p1 - 1;
						p2 = p2 - 1;						
						
						//printf do vetor					
						printf("O vetor inicial é\t");
						for(i = 0; i < nVet; i++){
							printf("%d ", v[i]);
						}
						printf("\n");

						//condicional para checar igualdade entre valores inseridos
						if(p1 == p2){
							printf("valores invalidos");
						}	else{
								vAux = v[p1];
								v[p1] = v[p2];

								//loop pra distribuir valores aos identicos
								for(i = 0; i < nVet; i++){
									if(v[i] == vAux){
										v[i] = v[p2];
									}
								}
								//printf do vetor
								printf("O vetor final é\t\t");
								for(i = 0; i < nVet; i++){
									printf("%d ", v[i]);		
								}
							}
						break;
					
					//case find
					case 'f': 
						//selecao de valores a serem operados
						printf("\nDigite os valores a serem buscados.\n");
						printf("Digite o primeiro valor.\n");				
						scanf("%d", &p1);
						printf("Digite o segundo valor.\n");				
						scanf("%d", &p2);
						printf("Os valores escolhidos foram %d e %d.\n", p1, p2);
						//funcao find						
						resposta = (v[p2] == v[p1] ? 'T' : 'F');
						printf("O find é %c", resposta);
						break;
			
					default:
						printf("Operacao invalida");
				}
			}
		}
	
		
	printf("\n");

	return 0;
}
