#include <stdio.h>
#include <stdlib.h>

/* Dado dois n�meros x e y, retorne o maior na vari�vel z:
Usando if-else
Usando o operador tern�rio
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
