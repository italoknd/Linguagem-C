#include <stdio.h>
#include <stdlib.h>

//FAÇA UM ALGORÍTMO QUE RECEBA VÁRIOS NÚMEROS E INFORME O MENOR NÚMERO QUE
//FOI INFORMADO

int main() {
	int num, menor;
	
	printf("\n Informe um  numero: ");
	scanf("%d", &num);
	menor = num;
	
	while (num != 0){
		printf("\n Informe um numero: ");
		scanf("%d",&num);
		
		if(num<menor && num!=0){
			menor = num;
		}
		
		printf("\n O menor numero e: %d", menor);
	}
	
	
	return 0;
}
