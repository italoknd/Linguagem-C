#include <stdio.h>
#include <stdlib.h>

/* Dado dois números x e y, retorne o maior na variável z:
Usando if-else
Usando o operador ternário
 */

int main(int argc, char *argv[]) {
	system("color 17");
	system("title TRABALHO AV2");
	int x,y,z;
	
	printf("Informe o valor de 'x': \n");
	scanf("%d",&x);
	
	printf("Informe o valor de 'y': \n");
	scanf("%d",&y);
	
	z = (x>y) ? x : y;
	printf("\nO maior numero informado foi: %d",z);
	
	return 0;
}
