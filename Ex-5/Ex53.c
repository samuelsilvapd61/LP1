#include <stdio.h>

void compra(int* conta, int valor) {
	*conta = *conta - valor;
}

int main (void) {

	int compras[] = { 100, 50, 80, 30, 20 };
	int minha_conta, conta1, conta2;
	int* contap;

	printf("Digite o saldo da primeira conta: ");
	scanf("%d", &conta1);
	printf("Digite o saldo da segunda conta: ");
	scanf("%d", &conta2);
	minha_conta = conta1 + conta2;
	printf("Conta 1: %d - Conta 2: %d\n", conta1, conta2);
	printf("Valor total: %d\n", minha_conta);

	for (int i = 0; i <= 4; i++){
		if (conta1 > conta2) {
			compra(&conta1, compras[i]);
		} else {	
			compra(&conta2, compras[i]);
		}
		minha_conta = conta1 + conta2;
		printf("Conta 1: %d - Conta 2: %d\n", conta1, conta2);
		printf("Valor total: %d\n", minha_conta);
	}	


	

	return 0;
}
