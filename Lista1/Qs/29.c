#include <stdio.h>
int main(){

	char a[100];
//	char rf[10],r[10];
	float n1,n2,m;

	printf("Digite o nome do aluno!\n");
	scanf("%[^\n]s", a);
	printf("Digite a primeira nota!\n");
	scanf("%f", &n1);
	printf("Digite a segunda nota!\n");
	scanf("%f", &n2);
		
	m = ((2*n1) + (3*n2)) / 5;
//	r = (m >= 7 ? "true" : "false");
//	rf = (m < 7 ? "true" : "false");
	
//	printf("Aluno:\t\t %s\nMedia:\t\t %.2f\nAprovado:\t %d\nFinal:\t\t %d\n",a,m,m>=7,m<7);	
//	printf("Aluno:\t\t %s\nMedia:\t\t %.2f\nAprovado:\t %s\nFinal:\t\t %s\n",a,m,r,rf);
	printf("Aluno:\t\t %s\nMedia:\t\t %.2f\n",a,m);
	printf("Aprovado:\t %s\n",(m >= 7 ? "true" : "false"));
	printf("Final:\t\t %s\n",(m < 7 ? "true" : "false"));	

	
	return 0;
}
