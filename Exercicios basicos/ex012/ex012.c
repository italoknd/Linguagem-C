#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	system("color 17");
	system("title TRABALHO AV2");
	int x, y;
	
	x = 10; 
	y = x++; 
		
	printf("%d \n",x);
	printf("%d \n",y);
		
	y = ++x; 
		
	printf("%d \n",x);
	printf("%d \n",y);
	return 0; 
}
