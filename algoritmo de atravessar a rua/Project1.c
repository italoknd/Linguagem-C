#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[]) {
	system("title ALGORITMO DE ATRAVESSAR A RUA");
	system("color 17");
	int i, x=1, sinal, escolha;
	
	for(i=0; i<=100; i++){
		system("cls");
		printf("\aCARREGANDO PROGRAMA, AGUARDE... %d%%\n", i);
		Sleep(0.1);
	}
	printf("CARREGAMENTO CONCLUIDO.\n");
	system("pause");
	system("cls");
	
	do{
		system("cls");
		printf("Escolha uma acao para o semaforo: \n");
		printf("(1) - Vermelho\n");
		printf("(2) - Amarelo\n");
		printf("(3) - Verde\n");
		printf("Escolha: \n");
		scanf("%d",&sinal);
		
			switch(sinal){
				case 1:
					sinal = 1;
					break;
				
				case 2:
					sinal = 2;
					break;
					
				case 3:
					sinal = 3;
					break;
					
				default:
					printf("Opcao invalida.");
			}
	}while(sinal!=1 && sinal!=2 && sinal!=3);
	
	system("cls");
	printf("VOce deseja atravessar a rua?\n");
	printf("(1)sim\t(2)nao\n");
	printf("Escolha: ");
	scanf("%d",&escolha);
	
	switch(escolha){
		case 1:
			if(sinal == 1){
				for(i=0; i<=100; i++){
				system("cls");
				printf("SINAL VERMELHO!\n Atravessando a rua... Aguarde... %d%%\n", i);
				Sleep(2);
				}
				
				system("cls");
				printf("Voce atravessou a rua!");
			}else if(sinal == 2){
				printf("SINAL AMARELO! (CARROS EM TRANSITO)\n Aguarde o sinal fechar...\n");
			}else{
				printf("SINAL VERDE! (CARROS EM TRANSITO)\n Aguarde o sinal fechar...\n");
			}
			break;
			
		case 2:
			printf("Ok...\n");
			break;
			
		default:
			printf("Opcao Invalida!\n");
	}
	
	return 0;
}
