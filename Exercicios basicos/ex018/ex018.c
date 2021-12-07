#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("color 17");
	system("title TRABALHO AV2");
	int num;
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	if(num == 10){
		printf("\nNumero igual 10");
	}else{
		printf("\nNumero diferente de 10.");
	}
	
	return 0;
}
