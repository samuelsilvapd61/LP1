#include<stdio.h>

struct Caixa {
	int valor;
	struct Caixa* prox;
};


int contem (struct Caixa* lista, int valor){
	while(lista != NULL){
		if((*lista).valor == valor){
			return 1;
		}
		lista = lista->prox;
	}
	return 0;
	
}


int main (void){
	struct Caixa c5 = {5, NULL};
	struct Caixa c4 = {7, &c5};
	struct Caixa c3 = {9, &c4};
	struct Caixa c2 = {3, &c3};
	struct Caixa c1 = {1, &c2};

	struct Caixa lista;
	lista.prox = &c1;

	int n;
	printf("Digite um número para ver se está na lista: ");
	scanf("%d", &n);

	int sim;	
	sim = contem(lista.prox, n);

	if (sim){
		printf("O número %d está na lista.", n);
	} else {
		printf("O número %d não está na lista.", n);
	}
	


	return 0;
}
