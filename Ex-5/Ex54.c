#include <stdio.h>

void troca(int* px,int* py) {
	int valor;	
	valor = *px;
	*px = *py;
	*py = valor;
}

int main (void) {

	int x=10, y=20;

	printf("%d %d\n", x, y);
	troca(&x, &y);
	printf("%d %d\n", x, y);

	
}
