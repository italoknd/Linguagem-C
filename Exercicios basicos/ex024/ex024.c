#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que mostra na tela os n�mero
de 1 a 100 */

int main(int argc, char *argv[]) {
	system("color 17");
	system("title TRABALHO AV2");
	int num =1;
	
	while(num<=100){
		printf("%d\n",num++);
	}
	
	system("pause");
	return 0;
}
