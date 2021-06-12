#include <stdio.h>

int main (void) {

	int n1, n2;
	int* p;

	printf("Digite o primeiro valor: ");
	scanf("%d", &n1);
	printf("Digite o segundo valor: ");
	scanf("%d", &n2);
	printf("1º valor: %d - 2º valor: %d\n", n1, n2);
	
	if (n1 > n2) {
		p = &n1;
		*p = *p - 50;
	} else {
		p = &n2;
		*p = *p - 50;
	}
	printf("1º valor: %d - 2º valor: %d\n", n1, n2);

	return 0;
}
