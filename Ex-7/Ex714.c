#include<stdio.h>   //Como eu faltei a aula de sexta que explicava sobre union, decidi já fazer algo funcional para aprender
#include<string.h>


struct Preco {
	int sub;	
	union {
		float real;
		float dolar;
		float euro;
	};
};

void exibe (struct Preco p){
	switch(p.sub){
		case 0:
			printf("Valor: %.2f reais.\n", p.real);
			break;
		case 1:
			printf("Valor: %.2f dólares.\n", p.dolar);
			break;

		case 2:
			printf("Valor: %.2f euros.\n", p.euro);
			break;

		default:
			printf("Erro\n");
			break;
	}
}

int main (void){
		
	struct Preco preco;
	
	printf("Digite 0 para Real, 1 para Dólar e 2 para Euro: ");
	scanf("%d", &preco.sub);

	switch(preco.sub){
		case 0:
			printf("Digite o valor em reais: ");
			scanf("%f", &preco.real);
			break;
		case 1:
			printf("Digite o valor em dólares: ");
			scanf("%f", &preco.dolar);
			break;

		case 2:
			printf("Digite o valor em euros: ");
			scanf("%f", &preco.euro);
			break;

		default:
			printf("Erro\n");
			break;
	}
	
	exibe(preco);

	int c;
	printf("CONVERSÃO - Digite 0 para Real, 1 para Dólar e 2 para Euro: ");
	scanf("%d", &c);
	if (preco.sub == 0 && c == 1){
		preco.dolar = preco.real / 4;
	} else {
		if (preco.sub == 1 && c == 0) {
			preco.dolar = preco.real * 4;
		} else {
			if (preco.sub == 0 && c == 2) {
				preco.euro = preco.real / 4.5;
			} else {
				if (preco.sub == 2 && c == 0) {
					preco.real = preco.euro * 4.5;
				} else {
					if (preco.sub == 1 && c == 2) {
						preco.euro = preco.dolar / 1.11;
					} else {
						preco.dolar = preco.euro * 1.11;
					}
				}
			}
		}
	}
	preco.sub = c;
	exibe(preco);
	

	return 0;
}
