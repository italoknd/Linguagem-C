#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//Treino da fun��o strcpy

//Como a fun��o trabalha: A fun��o strcpy copia uma string para outra string
//strcpy(string2,string1); (*FORMA LITERAL*)
// A String 2,ser� a string que ira receber a copia da string1

//Ex: msg1[15]=ola, msg2[15]
//utilizando o strcpy, temos:
// strcpy(msg2, msg1);

int main() {
	char msg1[15], msg2[15];
	
	setlocale(LC_ALL,"");
	
	printf("\n Diga alguma coisa: ");
	gets(msg1);
	
	strcpy(msg2,msg1);
	
	printf("\n O que voc� disse: %s", msg2);
	
	return 0;
}
