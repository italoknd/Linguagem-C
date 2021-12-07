#include <stdio.h>
#include <stdlib.h>

/* Construir o switch para escrever o nome do dígito lido
0 -> “zero”;
1 -> “um”;
etc.
 */

int main(int argc, char *argv[]) {
	system("color 17");
	system("title TRABALHO AV2");
	int num;
	
	printf("\nPara escrever 'zero' na tela, digite (0)");
	printf("Para escrever 'um' na tela, digite (1)");
	printf("\nPara escrever 'dois' na tela, digite (2)");
	printf("\nPara escrever 'tres' na tela, digite (3)");
	printf("\nPara escrever 'quatro' na tela, digite (4)");
	printf("\nPara escrever 'cinco' na tela, digite (5)");
	printf("\nEscolha: ");
	scanf("%d",&num);
	
	switch(num){
		case 0:
			printf("\nZero.\n");
			break;
		
		case 1:
			printf("\nUm.\n");
			break;
		
		case 2:
			printf("\nDois.\n");
			break;
	
		case 3:
			printf("\nTres.\n");
			break;
			
		case 4:
			printf("\nQuatro.\n");
			break;
			
		case 5:
			printf("\nCinco.\n");
			break;
			
		default:
			printf("\n[ERRO] Digito nao disponivel no sistema.\n");
	}
	system("pause");
	return 0;
}
