#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//treinando o uso da função "GETS"

int main() {
	char msg[15];
	setlocale(LC_ALL,"");
	
	printf("\n Escreva algo: ");
	gets(msg);
	printf("\n %s",msg);
	
	return 0;
}
