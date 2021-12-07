#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva, usando while, um programa para
calcular a média de N números. O valor de N é
dado pelo usuário. */

int main(int argc, char *argv[]) {	
	system("color 17");
	system("title TRABALHO AV2");
	
	int num, num1, x;
	float media=0;
	
	setlocale(LC_ALL, "");
	printf("\nInforme N: ");
	scanf("%d",&num);
	
	num1 = 0;
	
	while(num1 < num){
		printf("Informe um numero: ");
		scanf("%d",&x);
		
		num1+=1;
		media+=x;
	}
	
	printf("\nMedia: %f", media/num);
	return 0;
}
