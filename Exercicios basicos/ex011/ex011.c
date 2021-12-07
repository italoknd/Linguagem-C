#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	system("color 17");
	system("title TRABALHO AV2");
	
	int r, x = 5, y = 3;
	
	r = (x>2) && (y<x);
	printf("Resultado: %d\n", r);//verdade (1)
	
	r = (x%2==0) && (y>0);
	printf("Resultado: %d\n", r);//falso (0)
	
	r = (x>2) || (y>x);
	printf("Resultado: %d\n", r);//verdade (1)
	
	r = (x%2==0) || (y<0);//falso(0)
	printf("Resultado: %d\n", r);
	
	r = !(x>2);// falso(0)
	printf("Resultado: %d\n", r);
	
	r = !(x>7) && (x>y);//verdade(1)
	printf("Resultado: %d\n", r);
	
	return 0;
	
}
