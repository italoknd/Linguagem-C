#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Desenvolver um algoritmo que leia um numero nao determinado de valores e calcule e escreva a media
//aritmetica dos valores lidos, a quantidade de valores positivos, 
//a quantidade de valores negativos e o percentual de valores negativos e positivos.

int main() {
	int num=0, pos=0, neg=0, i=1 ;
	float percPos=0, percNeg=0, res=0, total=0, acumulador=0;
	
	setlocale (LC_ALL,"");
	
	do{
		printf("\n Informe o %d� numero ou pressione (0) para finalizar: ",i);
		scanf("%d",&num);
		i++;
		
		if(num!=0){
			acumulador++;
			total += num;
		}
		
		if(num>0){
			pos++;	
		}else if(num<0){
			neg++;
		}	
		
	}while(num!=0);
	
	res = total / acumulador;
	
	/*para tirar a porcentagem de uma "enquete/pesquisa etc", pega-se o total de um dado
	 que se quer saber a porcentagem e multiplica por 100, logo em seguida
	 divide a quantia pelo total de dados obtidos.*/
	
	percPos = (pos*100)/acumulador;
	percNeg = (neg*100)/acumulador;
	
	printf("\n A m�dia aritm�tica dos valores �: %.2f\n", res);
	
	printf("\n A quantidade de valores positivos digitada foi: %d", pos);
	printf("\n E a quantidade de valores negativos digitada foi: %d\n", neg);
	
	printf("\n A porcentagem dos valores positivos digitados foi de: %.2f%%", percPos);
	printf("\n E a porcentagem dos valores negativos digitados foi de: %.2f%%", percNeg);
	
	return 0;
}
