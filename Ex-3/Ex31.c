#include <stdio.h>

int main (void) {
	char i = 0, q = 0, soma = 0;
	float media = 0;
	char temps[50];
	while (i < 3) { //Era pra ser até 50, mas por questões de teste acabei deixando apenas até 3...
			//porém da pra simplesmente trocar onde tem 3 por 50
		printf("Digite a %dª temperatura: \n", i+1);
		scanf("%hhd", &temps[i]);
		i = i+1;
	}

	i = 0;
	while (i < 3) {	
		printf("A %dª temperatura e: %hhd\n", i+1, temps[i]);
		i = i+1;
	}

	i = 0;
	while (i < 3){
		soma = soma + temps[i];
		i = i+1;
	}
	media = soma/3;
	printf("A media das temperaturas e: %.2f\n", media);

	i = 0;
	while (i < 3) {
		if (temps[i] > media) {
			q = q + 1;
		}
		i = i+1;
	}
	printf("Foram digitados %d valores maiores que %.2f\n.", q, media);

	

return 0;

}
