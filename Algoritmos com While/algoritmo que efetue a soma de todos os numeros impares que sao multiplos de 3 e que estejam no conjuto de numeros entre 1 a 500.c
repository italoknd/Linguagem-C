#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Desenvolver um algoritmo que efetue a soma de todos os números ímpares que são múltiplos de três
//e que se encontram no conjunto dos números de 1 até 500.



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
	printf("\n A soma dos números é: %d", soma);
	
	return 0;
}
