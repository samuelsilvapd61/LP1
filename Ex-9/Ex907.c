#include<stdio.h>
#include<stdlib.h>

struct Caixa {
	int valor;
	struct Caixa* prox;
};


struct Caixa* concatena(struct Caixa* lista1, struct Caixa* lista2){
	struct Caixa* no = lista1;
	struct Caixa* noAnt = NULL;	
	struct Caixa* lista;
	struct Caixa* novoNo;	

	novoNo = (struct Caixa*) malloc(1 * sizeof(struct Caixa));
	lista = novoNo;

	while(no != NULL){
		if (noAnt != NULL){
			noAnt->prox = novoNo;
		}
		novoNo->valor = no->valor;
		noAnt = novoNo;
		no = no->prox;
		novoNo = (struct Caixa*) malloc(1 * sizeof(struct Caixa));
	}
	no = lista2;
	while(no != NULL){
		if (noAnt != NULL){
			noAnt->prox = novoNo;
		}
		novoNo->valor = no->valor;
		noAnt = novoNo;
		no = no->prox;
		novoNo = (struct Caixa*) malloc(1 * sizeof(struct Caixa));
	}

	return lista;
}

void exibe (struct Caixa* lista){
	printf("\n");
	while(lista != NULL){
		printf("%d\n", lista->valor);
		lista = lista->prox;
	}
	printf("\n");
}


int main (void){
	struct Caixa c5 = {5, NULL};
	struct Caixa c4 = {4, &c5};
	struct Caixa c3 = {3, &c4};
	struct Caixa c2 = {2, &c3};
	struct Caixa c1 = {1, &c2};

	struct Caixa c10 = {10, NULL};
	struct Caixa c9 = {9, &c10};
	struct Caixa c8 = {8, &c9};
	struct Caixa c7 = {7, &c8};	
	struct Caixa c6 = {6, &c7};

	struct Caixa lista, lista1, lista2;
	lista1.prox = &c1;
	lista2.prox = &c6;

	printf("Lista 1: ");
	exibe(lista1.prox);

	printf("Lista 2: ");
	exibe(lista2.prox);
	
	lista.prox = concatena(lista1.prox, lista2.prox);

	printf("Lista concatenada: ");
	exibe(lista.prox);

	printf("Lista 1: ");//Aqui serve para mostrar que a lista 1 não foi modificada
	exibe(lista1.prox);

	printf("Lista 2: ");//Aqui serve para mostrar que a lista 2 não foi modificada
	exibe(lista2.prox);

	return 0;
}
