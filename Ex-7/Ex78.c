#include<stdio.h>
#include<math.h>

//Neste exericício eu cosegui entender bem melhor como funciona a manipulação de endereço e valor,
// fazendo testes com as possibilidades demostradas abaixo

struct Ponto{
	int x, y;
};

void preenche1 (struct Ponto* p){
	printf("Coordenada x: ");
	scanf("%d", &p->x);       //poderia ser &((*p).x)
	printf("Coordenada y: ");
	scanf("%d", &p->y);       //poderia ser &((*p).x)
}

void preenche2 (struct Ponto* pv){
	for (int i=0; i<10; i++){
		preenche1(pv+i);  //poderia ser &(*(pv+i)) ou &(pv[i])
	}
}

void exibe (struct Ponto* pe){
	for (int i=0; i<10; i++){
		printf("Ponto %d = (%d, %d)\n", i+1, (*(pe+i)).x, (pe[i]).y); // poderia ser (pe+i)->x
	}	

}

struct Ponto longe(struct Ponto* vetor){         //Fiquei algumas horas pra resolver isso, mas deu certo
	struct Ponto pMaior;
	float d, dMaior = 0;
	int x, y;

	for (int i=0; i<10; i++){
		x = (vetor[i]).x;
		y = (vetor[i]).y;
		d = sqrt( pow(x,2) + pow(y,2) );
		if (d > dMaior) {
			dMaior = d;
			pMaior = vetor[i];
		}
	}
	return pMaior;
}

int main (void){
	struct Ponto vetor[10];
	preenche2(vetor);
	exibe(vetor);
	
	struct Ponto pontoD;
	pontoD = longe(vetor);
	printf("Ponto mais distante: (%d, %d).\n", pontoD.x, pontoD.y);			
	
	return 0;
}
