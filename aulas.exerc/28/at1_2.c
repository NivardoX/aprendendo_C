#include <stdio.h>
int main(){

	char str1[51];
	char str2[51] = "cala a boca";
	char str3[101];
	int i,j;


	printf("Digite a primeira string\n");
	scanf("%[^\n]s", str1);
	
	for(i = 0; str1[i] != '\0'; i++){
		str3[i] = str1[i];
	}	

//	printf("Digite a segunda string\n"); // str2 esta tomando o valor de str1
//	scanf("%[^\n]s", str2);
	
	j = i;
	for(i = 0; str2[i] != '\0'; i++){
		str3[i+j] = str2[i];
	}

	str3[i+j] = '\0'; 

//	printf("%s\n%s\n",str1,str2);

	printf("A string 1 eh %s, string 2 eh %s\nAs strings concatenadas eh %s\n", str1, str2, str3);

	return 0;
}
