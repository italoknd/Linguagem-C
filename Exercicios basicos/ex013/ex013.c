#include <stdio.h>
#include <stdlib.h>

/* Diga o resultado das variáveis x, y e z depois da
seguinte sequência de operações: */

int main(int argc, char *argv[]) {
	system("color 17");
	system("title TRABALHO AV2");
	int x, y, z;
	
	x = y = 10;// x=10, y=10
	z = ++x;// z=11, x=11
	y++;// y=11
	x+= y - (z--); //x=10
	
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	printf("z = %d\n",z);
	
	return 0;
}
