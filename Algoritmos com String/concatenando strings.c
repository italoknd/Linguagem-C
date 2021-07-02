#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

	char nome[] = "fulano";
	char sobrenome[] = " de tal";
	char nomeCompleto[15];

	strcat(nome, sobrenome);

	strcpy(nomeCompleto, nome);

	puts(nomeCompleto);

	return(0);

	system("pause");

}
