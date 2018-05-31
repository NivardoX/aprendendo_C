/*armazenar arquivos por alocacao dinamica e executar funcoes*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
	
char *registrar(int qnt);
char **remover(char codigo);
char **busca(char login);
void buffClear();



int main(){

	int qntUsuarios = 0; // codigo igual a qntUsuarios+1
	int i;
	int codigo;
	
	char **lista[3];
	char opc;
	

	cout << "Digite a opcao\n";
	cin >> opc;	

	switch(opc){

		case 'A'://apresentar

			cout << "Digite o codigo do usuario!\n";
			scanf("%d", &codigo);
			printf("Usuario de N : %d\n", codigo);
	
			for(i = 0; i <= codigo; i++){
			cout << "Codigo : " << codigo+1 << endl;
			printf("Nome : %s\n", lista[codigo][1]);
			printf("Senha : %s\n", lista[codigo][2]);
			printf("Login : %s\n", lista[codigo][3]);
			}

			break;	
		case 'B'://buscar

			break;
		case 'C'://cadastrar

			

			*lista[qntUsuarios] = registrar(qntUsuarios);
			qntUsuarios++;
			break;
		case 'D':	//deletar

			break;
		case 'S'://sair
			
			break;
		default:
			cout << "Opcao invalida\n";
			break;
	}









	return 0;
}



char *registrar(int qnt){

	char **pointer[3];
	char nome[80];
	char senha[12];
	char login[12];
	char q[100];
	//char *palavras;
	int i;
	
	pointer[qnt][1] = (char*)malloc(100  * sizeof(char));	
	//entrada de nome
	getchar();
	cout << "Digite o nome\n";
	scanf("%[^\n]s", pointer[qnt][1]);
	buffClear();	
	//printf("pointer = %s\n", pointer[qnt][1]);
	
	pointer[qnt][2] = (char*)malloc(12*sizeof(char));	
	//entrada de senha
	cout << "Digite a senha\n";
	scanf("%s", pointer[qnt][2]);
	getchar();
	//buffClear();
	//printf("pointer = %s\n", pointer[qnt][2]);

	pointer[qnt][3] = (char*)malloc(12*sizeof(char));	
	//entrada de login
	cout << "Digite o login\n";
	cin >> pointer[qnt][3];
	//buffClear();
	//printf("pointer = %s\n", pointer[qnt][3]);


	for(i = 0; i <= qnt; i++){
		cout << "Codigo : " << qnt+1 << endl;
		printf("Nome : %s\n", pointer[qnt][1]);
		printf("Senha : %s\n", pointer[qnt][2]);
		printf("Login : %s\n", pointer[qnt][3]);
		
	}
	
	cout << "q" << endl;
	return *pointer[qnt];
	cout << "q" << endl;
	free(**pointer);
}

void buffClear(){

	while(getchar() != '\n' && EOF);
}
