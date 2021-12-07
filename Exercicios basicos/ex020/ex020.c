#include <stdio.h>
#include <stdlib.h>

/* Dada o valor da nota de um aluno, monte o conjunto de if’s e else’s que verifica se ele foi aprovado, reprovado ou precisará fazer a sub.
Aprovado nota >= 60
Reprovado nota < 30
Sub >= 30 e < 60
 */

int main(int argc, char *argv[]) {
	system("color 17");
	system("title TRABALHO AV2");
	int nota;
	
	printf("Informe a nota do aluno: \n");
	scanf("%d",&nota);
	
	if(nota>=60){
		printf("Aprovado\n");
	}else if(nota >=30 && nota <60){
		printf("\nAluno precisa fazer a sub");
	}else{
		printf("\nReprovado");
	}
	
	return 0;
}
