#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*algoritmo que leia vários números e informar quantos números entre 50 e 200 foram informados. Quando o valor 0 (zero) for lido, o algoritmo deverá cessar sua execução*/

int main() {
	int qntd=0, num=0;
	
	setlocale(LC_ALL,"");
	
	do{
		printf("\n Informe um numero: ");
		scanf("%d",&num);
		
		if(num>=50 && num<=200){
			qntd++;
		}
	}while(num!=0);
	
	printf("\n A quantidade de numeros entre 50 e 200 eh: %d \n",qntd);
	
	system("pause");
	return 0;
}
