#include <stdio.h>

int main (void) {
	int n1;
	int n2;
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	if (n1 > n2) {
		printf("O numero %d e maior que %d.", n1, n2);
	} else {
		if (n2 > n1) {
			printf("O numero %d e maior que %d.", n2, n1);
		} else {
			printf("O numero %d e igual a %d.", n1, n2);
		}
	}
	return 0;
}
