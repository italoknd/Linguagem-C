#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* calcular a nota de varios alunos at� que o usuario pressione uma tecla para encerrar a opera��o */

int main(){
	setlocale(LC_ALL,"");
	
	char nome [101];
	float notas, media, total;
	int i,stop=0;
	
	
	while(stop!=1){
		
		printf("\n Informe o nome do(a) aluno(a): ");
		fflush(stdin);
		gets (nome);
		
		for(i=0;i<=2;i++){
		printf("\n Informe as notas do aluno: ");
		scanf("%f",&notas);
		
		total = total + notas;
	}
	
	media = total/3;
	total = 0;
	notas = 0;
	
	printf("\n A m�dia do aluno(a) %s �: %.2f",nome, media);
	
	if(media>=5){
		printf("\n O(a) aluno(a) %s est� aprovado(a)!", nome);
	}else{
		printf("\n O(a) Aluno(a) %s est� reprovado(a)!", nome);
	}	
	
	printf("\n\n deseja continuar sim(0) ou nao(1):\n");
	scanf("%d",&stop);
	}
	
	printf("\n Opera��o finalizada.");
	
	return 0;	
}
