#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("color 17");
	system("title TRABALHO AV2");
	int num;
	
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	if(num>10){
		printf("Numero informado maior que 10!");
	}
	
	return 0;
}
