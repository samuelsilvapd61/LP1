#include <stdio.h>

void compra(int* conta, int valor) {
	*conta = *conta - valor;
}

int main (void) {

	int minha_conta, conta1, conta2, valor;
	int* contap;

	printf("Digite o saldo da primeira conta: ");
	scanf("%d", &conta1);
	printf("Digite o saldo da segunda conta: ");
	scanf("%d", &conta2);
	minha_conta = conta1 + conta2;
	printf("Conta 1: %d - Conta 2: %d\n", conta1, conta2);
	printf("Valor total: %d\n", minha_conta);
	printf("Digite o valor a ser debitado: ");
	scanf("%d", &valor);
	if (conta1 > conta2) {
		compra(&conta1, valor);
	} else {	
		compra(&conta2, valor);
	}
	minha_conta = conta1 + conta2;
	printf("Conta 1: %d - Conta 2: %d\n", conta1, conta2);
	printf("Valor total: %d\n", minha_conta);

	return 0;
}
