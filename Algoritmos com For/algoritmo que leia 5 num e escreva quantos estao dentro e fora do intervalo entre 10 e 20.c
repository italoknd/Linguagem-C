#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//faça um algoritmo que leia 5 numeros e mostre quantos deles 
//estao dentro e fora intervalo entre 10 e 20

int main() {
	int num, i, intervalo=0, fora=0;
	
	setlocale (LC_ALL,"");
	
	for (i=0; i<=4; i++){
		printf("\n Informe um número: ");
		scanf("%d",&num);
		
		if(num >=10 && num <=20){
		intervalo++;
		}else{
		fora++;
		}
	}
	printf("\n %d número(s) está/estão dentro do intervalo entre 10 e 20", intervalo);
	printf("\n %d número(s) está/estão fora do intervalo entre 10 e 20", fora);
	
	return 0;
}
