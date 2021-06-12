#include <stdio.h>

int main (void) {

	int num, soma = 0, i = 1;
	
	while (num != 0) {
		printf("DIgite o %dº numero: ", i);
		scanf("%d", &num);
		soma = soma + num;
		i = i+1;
	}
	printf("A soma dos numeros e = %d\n", soma);
	
	return 0;
}
