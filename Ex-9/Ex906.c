#include<stdio.h>
#include<stdlib.h>

struct Caixa {
	int valor;
	struct Caixa* prox;
};


struct Caixa* insere(struct Caixa* lista, int valor){
	struct Caixa* no = lista;	
	struct Caixa* noAnt = NULL;
	struct Caixa* novoNo;
	novoNo = (struct Caixa*) malloc(1 * sizeof(struct Caixa)); 	//Aqui nós alocamos um espaço em memória para uma nova caixa
	(*novoNo).valor = valor;					//Aqui nós inicializamos
	(*novoNo).prox = NULL;						// a nova caixa
	
	while(no != NULL){
		if((*no).valor <= valor){
			noAnt = no;
			no = no->prox;
		} else {
			break;
		}
	}
	if(noAnt == NULL){
		novoNo->prox = lista;
		lista = novoNo;
	} else {
		if (noAnt != NULL && no != NULL){
			noAnt->prox = novoNo;
			novoNo->prox = no;
		} else {
			noAnt->prox = novoNo;
		}
		
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
	struct Caixa c5 = {9, NULL};
	struct Caixa c4 = {7, &c5};
	struct Caixa c3 = {5, &c4};
	struct Caixa c2 = {3, &c3};
	struct Caixa c1 = {1, &c2};

	struct Caixa lista;
	lista.prox = &c1;

	exibe(lista.prox);

	int n;
	printf("Digite um número para ser inserido na lista:");
	scanf("%d", &n);
	
	
	lista.prox = insere(lista.prox, n);
	
	exibe(lista.prox);

	return 0;
}
