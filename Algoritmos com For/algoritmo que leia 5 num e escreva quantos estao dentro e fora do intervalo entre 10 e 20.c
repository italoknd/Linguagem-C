#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fa�a um algoritmo que leia 5 numeros e mostre quantos deles 
//estao dentro e fora intervalo entre 10 e 20

int main() {
	int num, i, intervalo=0, fora=0;
	
	setlocale (LC_ALL,"");
	
	for (i=0; i<=4; i++){
		printf("\n Informe um n�mero: ");
		scanf("%d",&num);
		
		if(num >=10 && num <=20){
		intervalo++;
		}else{
		fora++;
		}
	}
	printf("\n %d n�mero(s) est�/est�o dentro do intervalo entre 10 e 20", intervalo);
	printf("\n %d n�mero(s) est�/est�o fora do intervalo entre 10 e 20", fora);
	
	return 0;
}
