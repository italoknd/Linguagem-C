#include <stdio.h>
#include <stdlib.h>

/* Diga se as seguintes expressões serão verdadeiras ou
falsas: */

int main(int argc, char *argv[]) {	
	system("color 17");
	system("title TRABALHO AV2");
	int x = 7;
	int res;
	
	printf("1 - Verdadeiro\t 2 - Falso\n");
	printf("Resultados:\n");
	
	res = (x>5) || (x>10);//verdade (1)
	printf("%d\n",res);
	
	res = (!(x==6) && (x>=6));//verdade (1)
	printf("%d",res);
	
	return 0;
}
