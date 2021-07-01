#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faca um algoritmo para ler 6 numeros e escrever a media dos numeros que sao impares

int main() {
	int num, i, impar=0;
	float media, total;
	
	setlocale(LC_ALL,"");
	
	for(i=0; i<=5; i++){
		printf("\n Informe um números: ");
		scanf("%d",&num);
		
		if(num %2!=0){
			impar++;
			total += num;
		}
	}
	media = total / impar;
	
	printf("\n A média dos números ímpares é: %.2f", media);
	
	return 0;
}
