#include <stdio.h>
#include <stdlib.h>
//crie um algoritmo que calcule a media aritmetica de uma quantidade indefinida de numeros
// informada pelo usuario

int main(){
	int cont=0;
	float num=0, media=0, total=0;
	
	printf("\n Informe um numero: (Ao pressionar a tecla zero, voce encerra o programa) ");
	scanf("%f", &num);
	
	while (num != 0){
		total = total + num;
		cont++;
		printf("\n Informe um numero: (Ao pressionar a tecla zero, voce encerra o programa) ");
		scanf("%f", &num);
	}
	
	media = total/cont;
	
	printf("\n A media dos numeros digitados e: %.2f", media);
}
