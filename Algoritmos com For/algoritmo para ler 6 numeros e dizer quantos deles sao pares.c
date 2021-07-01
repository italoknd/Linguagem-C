#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faca um algoritmo para ler 6 numeros e escrever quantos sao pares

int main() {
	setlocale(LC_ALL,"");
	int i, num, par=0;
	
	for(i=0;i<=5;i++){
		printf("\n Informe um números: \n");
		scanf("%d",&num);
	
		if(num %2==0){
			par++;
		}
	}
	printf("\n %d deste(s) número(s) são/é par(es).", par);
	
	return 0;
}
