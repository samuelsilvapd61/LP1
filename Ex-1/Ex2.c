#include <stdio.h>

int main (void){
	int i, n1, n2, maior, menor;
	printf("Escolha o primeiro numero: ");
	scanf("%d", &n1);
	printf("Escolha o segundo numero: ");
	scanf("%d", &n2);

	if (n1 > n2){
		maior = n1;
		menor = n2;
	} else {
		maior = n2;
		menor = n1;
	}
	i = maior;
	while (i >= menor) {
		if (i % 2 == 0){
			printf("%d\n", i);
		}
		i = i-1;
	}

	return 0;
}
