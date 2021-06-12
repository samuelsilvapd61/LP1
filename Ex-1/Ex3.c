#include <stdio.h>

int main (void){
	char nota[100];
	int i = 0, quant = 0, soma = 0;
	float media;
	
	while (i < 50){
		printf("Digite a %dª nota: ", i+1);
		scanf("%hhd", &nota[i]);
		soma = soma + nota[i];
		i = i + 1;
	}
	media = soma/50;
	printf("A media e: %.2f\n", media);
	
	i = 0;
	while (i <= 4){
		if (nota[i] > media){
			quant = quant + 1;
		}
		i = i + 1;
	}
	printf("Existem %d notas maiores que a media.\n", quant);

	return 0;
}
