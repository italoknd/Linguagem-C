#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
	int chances=5;
	char senha[9], tentativa[9]
	
	printf("\n Crie sua senha: ");
	gets(senha);
	
	printf("\n Senha criada! Para ter acesso permitido informe sua senha atual (pressione qualquer tecla).");
	
	for (chances=5;chances>0; chances--){
		printf("\n Informe sua senha: ");
		gets(tentativa);
		
		if(strcmp(senha, tentativa)==0){
			printf("\n Acesso permitido!");
		}else{
			printf("\n Acesso negado, tente novamente!");
			chances--;
			printf("\n Total de chances restantes: %d",chances);
		}
	}
	
	return 0;
}
