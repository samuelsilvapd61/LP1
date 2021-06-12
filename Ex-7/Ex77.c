#include<stdio.h>

struct Galaxia{
	char nome[20];
	int tamanho;
};

void preenche (struct Galaxia* g){
	printf("Digite o nome da galáxia: ");
	scanf("%s", g->nome);
	printf("Digite o tamanho da galáxia (anos-luz): ");
	scanf("%d", &g->tamanho);
}

int main (void){
	struct Galaxia g1;
	preenche(&g1);
	printf("Nome: %s - Diâmetro: %d anos luz\n", g1.nome, g1.tamanho);
		
	return 0;
}
