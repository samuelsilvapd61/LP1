#include<stdio.h>
#include<math.h>

//Este algoritmo ainda está em andamento, vou terminar este, juntamente com os outros que faltam hoje (sexta-feira)

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
	for (int i=0; i<3; i++){
		printf("\n%dº personagem:\n", i+1);
		preencheUm(pt+i);
	}
}

void exibe (struct Personagem* pe){
	for (int i=0; i<3; i++){
		printf("Id: %d - Posição: (%d, %d) - Pontuação: %d\n", pe[i].id, pe[i].p.x, pe[i].p.y, pe[i].pontuacao);
	}	
}

void preencheMatriz(int mp){            //Algo de errado aqui
	for (int i=0; i<4; i++){
		mp[i+1][0] = i;
		mp[0][i+1] = i;
	}
}

void exibeMatriz(int me){               //Algo de errado aqui
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			printf("%d ", me[i][j]);
		}
		printf("\n");
	}
}

int main (void){
	struct Personagem vetor[10];
	preencheTudo(vetor);
	exibe(vetor);

	int matriz[11][11];			
	preencheMatriz(matriz);	            //Algo de errado aqui
	return 0;
}
