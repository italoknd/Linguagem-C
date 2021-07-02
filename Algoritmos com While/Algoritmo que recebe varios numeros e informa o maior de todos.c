#include <stdio.h>
#include <stdlib.h>


int main() {
	int num, maior;
	
	printf("\n Informe um numero: ");
	scanf("%d",&num);
	maior = num;
	
	while(num>0){
		printf("\n Informe outro numero: ");
		scanf("%d",&num);
		
		if(num>maior && maior>0){
			maior = num;
		}
		printf("\n O maior numero e: %d", maior);
	}
	
	return 0;
}
