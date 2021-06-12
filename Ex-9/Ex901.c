#include<stdio.h>


struct Caixa {
        int valor;
        struct Caixa* prox;
};

void exibe (struct Caixa* c){
	while(c != NULL){
		printf("%d\n", c->valor);
		c = c->prox;
	}
}

int main (void){
        struct Caixa c1, c2, c3, c4, c5;
        
	c5.valor = 7;
        c5.prox = NULL;

        c4.valor = 5;
        c4.prox = &c5;

        c3.valor = 9;
        c3.prox = &c4;

        c2.valor = 3;
        c2.prox = &c3;

        c1.valor = 1;
        c1.prox = &c2;

        printf("%d->%d->%d->%d->%d\n", c1.valor, c1.prox->valor, c1.prox->prox->valor, c1.prox->prox->prox->valor, c1.prox->prox->prox->prox->valor);
	printf("%d->%d->%d->%d->%d\n", c1.valor, (*c1.prox).valor, (*(*c1.prox).prox).valor, (*(*(*c1.prox).prox).prox).valor, (*(*(*(*c1.prox).prox).prox).prox).valor);

exibe(&c1);

        return 0;
}
