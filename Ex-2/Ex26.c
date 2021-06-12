#include <stdio.h>

int main (void) {
	
	int n, i = 1, soma = 0;

	printf ("Digite um numero para calcular o somatorio: ");
	scanf("%d", &n);
	
	while (i <= n) {
		soma = soma + i*i;
		i = i+1;
	}
	printf ("A soma e = %d\n", soma);
	
	return 0;
}
