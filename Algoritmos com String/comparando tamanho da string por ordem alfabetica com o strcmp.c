#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//algoritmo que compara duas strings e diz qual a maior levando em consideração apenas a grandeza
//em ordem alfabetica (e diga se sao iguais caso aconteça)

int main() {
	char msg1[15],msg2[15];
	
	printf("\n Digite algo: ");
	gets(msg1);
	printf("\n Digite outra coisa: ");
	gets(msg2);
	
	if(strcmp(msg1,msg2)>0){
		printf("\n A primeira coisa digitada eh maior por grandeza alfatebica.");
	}else if(strcmp(msg1,msg2)<0){
		printf("\n A primeira coisa digitada eh menor por grandeza alfatebica.");
	}else{
		printf("\n Sao iguais!");
	}
	// neste caso, a função vai comparar todas as letras de uma palavra
	//ou apenas uma letra, se for o caso
	
	return 0;
}
