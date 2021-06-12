#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Caixa {
	int valor;
	struct Caixa* prox;
};


struct Caixa* concatena(struct Caixa* lista1, struct Caixa* lista2){
	struct Caixa* no = lista1;
	struct Caixa* no2 = NULL;
	struct Caixa* noAnt = NULL;	
	struct Caixa* lista;
	struct Caixa* novoNo;
	bool sim = false;

	novoNo = (struct Caixa*) malloc(1 * sizeof(struct Caixa));
	lista = novoNo;

	while(no != NULL){
		if (noAnt != NULL){
			noAnt->prox = novoNo;
		}
		no2 = lista2;
		sim = false;
		while(no2 != NULL){
			if((*no2).valor == no->valor){
				sim = true;
				break;
			}
		//printf("\n%d\n", no->valor);
		no2 = no2->prox;
		}
	
		if(sim){
			no = no->prox;
		} else {
			novoNo->valor = no->valor;
			//printf("\n%d\n", novoNo->valor);
			no = no->prox;
			noAnt = novoNo;
			novoNo = (struct Caixa*) malloc(1 * sizeof(struct Caixa));
		}
	
		
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

	struct Caixa c10 = {9, NULL};
	struct Caixa c9 = {8, &c10};
	struct Caixa c8 = {5, &c9};
	struct Caixa c7 = {4, &c8};	
	struct Caixa c6 = {2, &c7};

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
