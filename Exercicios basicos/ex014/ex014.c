#include <stdio.h>
#include <stdlib.h>

/* Diga o resultado das vari�veis x, y e z depois da
seguinte sequ�ncia de opera��es: */

int main(int argc, char *argv[]) {
	system("color 17");
	system("title TRABALHO AV2");
	int x, y;
	int a = 14, b = 3;
	float z;
	
	x = a/b;
	y = a%b;
	z = y/x;
	
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %f\n", z);
	
	return 0;
}
