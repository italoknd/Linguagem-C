#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//ex de uso do strcat

int main() {
	char msg1[15], msg2[15];
	
	printf("\n Digite algo: ");
	gets(msg1);
	printf("\n Digite mais uma coisa: ");
	gets(msg2);
	
	strcat(msg1,msg2);//concatenando as duas strings
	
	printf("\n Voce digitou: %s",msg1);
	//na hora de mostrar a msg concatenada, utiliza-se somente a primeira variavel
	//da string que vai ser concatenada, nesse caso, a "msg1"
	
	return 0;
}
