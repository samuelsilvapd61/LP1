#include <stdio.h>

int main (void) {
	float dolar;
	float real;
	printf("Digite o valor do celular em dólares: ");
	scanf("%f", &dolar);	
	real = dolar * 3.17;
	if (real <= 1000){
		printf ("O celular custa R$%f reais. BOM NEGOCIO!\n", real);
	} else {
		printf ("O celular custa R$%f reais. MAL NEGOCIO!\n", real);
	}
	
	return 0;
}
