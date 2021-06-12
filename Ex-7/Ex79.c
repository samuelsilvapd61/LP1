#include<stdio.h>
#include<math.h>

struct Posicao{
	int x, y;
};

struct Personagem{
	int id;
	struct Posicao p;
	int pontuacao;

};

struct Posicao preenchePosicao (struct Personagem* pp){
	printf("Coordenada x: ");
	scanf("%d", &pp->p.x);       
	printf("Coordenada y: ");
	scanf("%d", &pp->p.y);       
}

void preencheUm (struct Personagem* pu){
	printf("ID do personagem: ");
	scanf("%d", &((*pu).id));
	preenchePosicao(pu);
	printf("Pontuação: ");
	scanf("%d", &((*pu).pontuacao));
}

void preencheTudo (struct Personagem* pt){
	for (int i=0; i<10; i++){
		printf("\n%dº personagem:\n", i+1);
		preencheUm(pt+i);
	}
}

void exibe (struct Personagem* pe){
	for (int i=0; i<10; i++){
		printf("Id: %d - Posição: (%d, %d) - Pontuação: %d\n", pe[i].id, pe[i].p.x, pe[i].p.y, pe[i].pontuacao);
	}	
}


int main (void){
	struct Personagem vetor[10];
	preencheTudo(vetor);
	exibe(vetor);		
	
	return 0;
}
