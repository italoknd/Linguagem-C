#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Desenvolver um algoritmo que efetue a soma de todos os n�meros �mpares que s�o m�ltiplos de tr�s
//e que se encontram no conjunto dos n�meros de 1 at� 500.



int main() {
	int num, soma=0;
	
	setlocale(LC_ALL,"");
	
	while(num>0){
		printf("\n Informe um numero: ");
		scanf("%d", &num);
		
		if((num %3==0) && (num %2!=0) && (num>=1) && (num<=500)){
			soma+=num;
		}
	}
	printf("\n A soma dos n�meros �: %d", soma);
	
	return 0;
}
