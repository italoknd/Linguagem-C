#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa dever� calcular e mostrar:
//A menor altura do grupo e a maior altura do grupo

int main() {
	int i=1, y=0;
	float menorAlt=0, maiorAlt=0, alt;
	
	setlocale(LC_ALL,"");
	
	do{
		printf("\n Informe a %d� altura: ",i);
		scanf("%f",&alt);
		
		/*No "if" a seguir, eu coloco como condi��o se "Y==0" para que as minhas duas variaveis
		"Maior" e "Menor" recebam o mesmo valor para assim  inicializarmos as compara��es
	    Ao final incrementa-se 1 a variavel "y" para que essa condi��o nao seja mais atendida
		e o codigo prossiga normalmente.*/
		
		/*  Lembrando que a variavel de teste (nesse caso "y") deve inicializar
		com um valor que bata como o valor da condi��o pelo menos na primeira vez, ou seja:
		
		Nesse caso: int y=0;
		 				
		IF (y==0){
		bloco de comandos a se executar;
		}								
		
		ex:
		se y==0
			
		maior = numeroDigitado;
		menor = numeroDigitado;
		y++;
			
		ap�s isso, o proximo "If" come�a suas compara��es normais:
			
		SE numeroDigitado > maior
		ENT�O maior = numeroDigitado
			
		e assim por diante.
		*/
		
		if(y==0){
			maiorAlt = alt;
			menorAlt = alt;
			y++;
		}else if(alt > maiorAlt){
			maiorAlt = alt;
		}else if(alt<menorAlt){
			menorAlt = alt;
		}
		
		i++;
	}while(i<=15);
	
	printf("\n A maior altura do grupo eh: %.2f", maiorAlt);
	printf("\n E a menor altura do grupo eh: %.2f", menorAlt);
	
	return 0;
}

//ultima obs, como foi usado valores float, não utilize pontos para separar valores decimais e sim virgulas, ja que o setlocale foi declarado
