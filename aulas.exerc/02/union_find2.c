#include <stdio.h> //unfinished
int main(){

	int v[1000];
//	int v[1000] = {0, 1, 2, 2, 4, 5};
	int p1 = 2;
	int p2 = 5;
	int i, vAux, nVet, nOpera;
	char opcao, resposta;
	opcao = 'u';


//	valores p1, p2
//	p1 posicao1
//	p2 posicao2

	//tamanho do vetor
	printf("Digite a quantidade de subvetores: \n");
	scanf("%d", &nVet);
	//quantidade de operacoes
	printf("Digite a quantidade de operacoes a serem realizadas:\n");
	scanf("%d", &nOpera);

	//insercao de subvetores
	for(i = 0; i < nVet; i++){
		printf("Digite o %d subvetor:\n", i);
		scanf("%d", &v[i]);		
	}

	//condicional se nVet = 0
	if(nVet == 0){
		printf("tamanho de vetor invalido.\n");
	} else{
		//loop para quantidadde de operacoes
		for(i = 0; i < nOpera; i++);{


			//condicional se valor de nOpera = 0
			if(nOpera == 0){
				printf("0 operacoes requisitadas.\n");
			} else{



				
				//selecao de operacao
				printf("Escolha a operacao a ser realizada:\nU - Union\nF - Find\n");
				scanf("%c", &opcao);
				printf("Opcao selecionada %c", opcao);

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
						printf("Os valores escolhidos foram %d e %d\n.", p1, p2);
						
						printf("O vetor inicial é\t");
						for(i = 0; i < nVet; i++){
							printf("%d ", v[i]);
						}
						printf("\n");

						if(v[p1] == v[p2]){
							printf("nao foi");
						}	else{
								vAux = v[p1];
								v[p1] = v[p2];

								//loop pra distribuir valores aos identicos
								for(i = 0; i < nVet; i++){
									if(v[i] == vAux){
										v[i] = v[p2];
									}
				
							}
							printf("O vetor final é\t\t");
							for(i = 0; i < nVet; i++){
								printf("%d ", v[i]);		
							}
								}
						break;
					
					//case find
					case 'f': 
						resposta = (v[p2] == v[p1] ? 'T' : 'v');
						printf("O find é %c", resposta);
						break;
			
					default:
						printf("Operacao invalida");
				}
			}
		}
	}
		
	printf("\n");

	return 0;
}
