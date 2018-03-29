#include <stdio.h>
int main(){

	char str1[6] = "cala ",
		 str2[6] = "bocak",
		 str3[11] = "";
	int i,j;


	for(i = 0; str1[i] != '\0'; i++){
		str3[i] = str1[i];
}	
	j = i;
	for(i = 0; str2[i] != '\0'; i++){
		str3[i+j] = str2[i];
}

	printf("A string 1 eh %s, string 2 eh %s\nAs strings concatenadas eh %s\n", str1, str2, str3);

	return 0;
}
