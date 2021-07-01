#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	int num, i, mult, res=0;
	
	setlocale(LC_ALL,"");
	
	printf("\n Informe um número para ver sua tabuada do 1 ao 10 em ordem crecente: ");
	scanf("%d",&num);
	
	for(i=0; i<=9; i++){
		res = mult * num;
		mult++;
		
		printf("\n %d", res);
	}
	printf("\n São os resultados obtidos. ");
	
	return 0;
}
