#include <stdio.h>
#include <stdlib.h>

/*  crie um algoritmo que calcule 4 notas de um aluno e faça a sua media */

int main(){
	char nome[101];
	int i=0;
	float notas, media, total;
	
	printf("\n Informe o nome do aluno: ");
	fflush (stdin);
	gets(nome);
	
	for (i=0; i<=3; i++){
		printf("\n Informe a nota: ");
		scanf("%f",&notas);
		
		total = total + notas;
	}
	media = total / 4;
	
	if(media>=5){
		printf("\n Aluno(a) aprovado(a)! ");
	}else{
		printf("\n Aluno(a) reprovado(a)! ");
	}
	
	printf("\n A media do(a) aluno(a) %s e: %.2f",nome, media);
}
