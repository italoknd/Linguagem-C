#include <stdio.h>
#include <stdlib.h>


int main() {
	int c, i, sal;
	
	while(sal>0){
		printf("\n Informe o valor do salario: ");
		scanf("%d",&sal);
		
		if(sal>5000){
			i=i+1;	
		}
	}
	printf("\n A quantidade de pessoas com salario acima de 5000 e: %d", i);
	
	return 0;
}
