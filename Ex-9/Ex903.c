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
	struct Caixa* cabeca = &c1; 
        
	c5.valor = 7;
        c5.prox = NULL;

        c4.valor = 5;
        c4.prox = &c5;

        c2.valor = 3;
        c2.prox = &c4;

        c1.valor = 1;
        c1.prox = &c2;

	exibe(cabeca);

	c3.valor = 9;
	c3.prox = &c1;
	cabeca = &c3;

	exibe(cabeca);

	



        //printf("%d->%d->%d->%d->%d\n", c1.valor, c1.prox->valor, c1.prox->prox->valor, c1.prox->prox->prox->valor, c1.prox->prox->prox->prox->valor);
	//printf("%d->%d->%d->%d->%d\n", c1.valor, (*c1.prox).valor, (*(*c1.prox).prox).valor, (*(*(*c1.prox).prox).prox).valor, (*(*(*(*c1.prox).prox).prox).prox).valor);


        return 0;
}
