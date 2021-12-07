#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa para ler 5 números e mostrar
o resultado da soma desses números */

int main(int argc, char *argv[]) {	
	system("color 17");
	system("title TRABALHO AV2");
	
	int num, res, controle;
	res = 0;
	setlocale(LC_ALL, "PORTUGUESE");
	
	while(controle<=5){
		printf("Informe o %dº numero: \n",controle);
		scanf("%d",&num);
		
		res+=num;
		controle++;
	}
	
	printf("O resultado da soma eh: %d",res);
	return 0;
}
