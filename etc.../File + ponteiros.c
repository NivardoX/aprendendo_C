/* Programa que cria, altera, le e remove um arquivo
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

/*
FLE criar(FILE *fp);
void alterar();
*/

int main(){
	
	int i,n;
	int *p;
	char opca;	
	int remov;	
	char linha[100];	
	char ch;

	FILE *fp;

	opca = 'd';	

	while(opca != EOF){
		//system("clear");		
	
		cout << endl;
		printf("O q deseja fazer?\n");
		
		cout << "C - Criar\nA - Alterar\nR - Remover\nL - Ler\n";

		cin >> opca;


		switch(opca){


			//criar
			case 'C':
				fp = fopen("linhas.txt", "w");
				if(fp == NULL){
					cout << "Arquivo nao criado\n";
					break;				
				}	
					fclose(fp);
					cout << "Arquivo criado com sucesso\n";
				break;

			//adicio			
			case 'A':
			
				fp = fopen("linhas.txt", "a");
				
				if(fp == NULL){
					cout << "Erro!\n";
					break;			
				}
	
				cout << "Quantas linhas deseja adicionar?\n";
				cin >> n; 
			
				
				while(n--){
					cout << "Digite a linha a ser adicionada!\n";
					getchar();
					scanf("%[^\n]s", linha);
					fputs(linha,fp);
					putc('\n', fp);
				}
				fclose(fp);

				break;

			
			//ler
			case 'L':
	
				fp = fopen("linhas.txt", "r");
	
				if(fp == NULL){
					cout << "Arquivo inexistente\n";
					main();
				}					

				ch = getc(fp);
				
				if(ch == EOF)
					break;

				cout << endl;	
					
				cout << "------------------------------------------------\n";
	
				do{
					cout << ch;
					ch = getc(fp);	
				}while(ch != EOF);
	
				cout << "------------------------------------------------\n";	

				fclose(fp);
				break;
				

			//remove
			case 'R':

				fp = fopen("linhas.txt", "r");
				
				if(fp == NULL){
					cout << "Arquivo inexistente\n";
					break;
				}else{

					cout << "Tem certeza? Y/N\n";
					cin >> opca;
		
					if(opca == 'Y'){
						remov = remove("linhas.txt");
						if(remov){
							cout << "O arquivo nao pode ser removido!\n";				
						}else{
							cout << "Arquivo removido com sucesso!\n";
						}
					}

				}
	
				break;
			default:
				cout << "Opcao invalida!\n";	
				break;
		}

	}


	return 0;
}

/*
FILE criar(FILE *fp){
	fp = fopen("numeros.txt", "w+");
	if(fp == NULL){
		cout << "Arquivo nao criado\n";
	}else
		return *fp;
}
void alterar(){
	
}
*/
