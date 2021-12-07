#include <stdio.h>
#include <stdlib.h>

/* Dada o valor da nota de um aluno, monte a expressão if que verifica se ele precisará fazer a sub. 
O aluno deverá fazer sub se sua nota for maior ou igual a 30 e menor do que 60.
 */

int main(int argc, char *argv[]) {
	system("color 17");
	system("title TRABALHO AV2");
	int nota;
	
	printf("Informe a nota do aluno: \n");
	scanf("%d", &nota);
	
	if(nota>=30 && nota<60){
		printf("\nAluno precisa fazer a substitutiva.");
	}
	
	return 0;
}
