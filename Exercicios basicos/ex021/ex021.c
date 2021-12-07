#include <stdio.h>
#include <stdlib.h>

/*
Construir a seqüência de if-else para escrever o nome do dígito lido
‘0’ -> “zero”;
‘1’ -> “um”;
etc.
 */

int main(int argc, char *argv[]) {
	system("color 17");
	system("title TRABALHO AV2");
	int num;
	
	printf("\nInforme um numero (0 ou 1): ");
	scanf("%d",&num);
	
	if(num == 0){
		printf("\nZero.");
	}else if(num == 1){
		printf("\nUm.");
	}else{
		printf("\n[ERRO] Digito informado nao esta entre 0 e 1.");
	}
	
	return 0;
}
