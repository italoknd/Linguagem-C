#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//ex usando o strlen

int main() {
	int tam=0;
	char msg1[15];
	
	printf("\n Digite algo: ");
	gets(msg1);
	
	tam = strlen(msg1);
    //a fun��o ir� ver o tamanho total da string
	//obs: ela nao ira contar com o tamanho do vetor, so ira contar
	//a quantidade de caracteres digitados (inclusive os espa�os).
	
	// variavel "tam" � usada para guardar o valor retornado 
	//pela fun��o strlen que contem a quantidade de caracteres que tinha na string comparada
	
	printf("\n O tamanho da string eh: %d",tam);
	
	return 0;
}
