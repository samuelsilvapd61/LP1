#include<stdio.h>

struct Caixa {
	int valor;
	struct Caixa* prox;
};


struct Caixa* remover(struct Caixa* lista, int valor){
	struct Caixa* no = lista;	
	struct Caixa* noAnt = NULL;
	
	while(no != NULL){
		if((*no).valor == valor){
			if(noAnt == NULL){
				return no->prox;
			} else {
				noAnt->prox = noAnt->prox->prox;
				return lista;
			}
		}
		noAnt = no;
		no = no->prox;
	}
	printf("O valor não se encontra na lista.");
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
	struct Caixa c4 = {7, &c5};
	struct Caixa c3 = {9, &c4};
	struct Caixa c2 = {3, &c3};
	struct Caixa c1 = {1, &c2};

	struct Caixa lista;
	lista.prox = &c1;

	exibe(lista.prox);

	int n;
	printf("Digite um número para ser removido da lista:");
	scanf("%d", &n);
	
	
	lista.prox = remover(lista.prox, n);
	
	exibe(lista.prox);

	return 0;
}
