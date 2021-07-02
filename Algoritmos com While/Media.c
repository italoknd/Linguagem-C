#include <stdio.h>
#include <stdlib.h>
//Algoritmo para calcular 4 notas de um aluno

int main(){
	int cont;
	float notas=0, total=0, media=0;
		
	while (cont<3){
		printf("\n Informe as notas: ");
		scanf("%f",&notas);
		total = total + notas;
		cont++;	
	}
	media = total/3;
	
	printf("\n A media e: %.2f", media);
}
