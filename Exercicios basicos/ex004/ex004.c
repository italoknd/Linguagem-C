#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("color 17");
	system("title TRABALHO AV2");
	
	printf("Esse texto sera escrito na tela\n");
	
	int x =10;
	float y = 20;
	
	printf("%d\n",x);
	
	printf("%d %f\n",x,y);
	
	printf("O valor de x eh %d e o valor de y eh %f\n",x,y);
	
	return 0;
}
