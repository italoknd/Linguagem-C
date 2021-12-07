#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("color 17");
	system("title TRABALHO AV2");
			
	char c; 
	c = getchar();

	printf("Caractere: %c\n", c); 
	printf("Codigo ASCII: %d\n", c); 

	system("pause");
	
}
