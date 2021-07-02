#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//ex usando o strcmp

int main() {
	char msg1[15], msg2[15];
	
	printf("\n Digite algo: ");
	gets(msg1);
	printf("\n Digite mais alguma coisa: ");
	gets(msg2);
	
	//verificando se as strings sao iguais:
	if(strcmp(msg1,msg2)==0){
		printf("\n As strings sao iguais!");
	}else{
		printf("\n Nao sao iguais!");
	}
	
	//obs: para saber se as strings sao iguais, o valor retornado tem que ser igual a zero
	// e para saber somente se sao diferentes, o valor retornado tem que ser igual a um
	
	return 0;
}
