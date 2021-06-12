#include <stdio.h>
#include <string.h>

//Esse algoritmo infelizmente nao soluciona a questao de poder haver times com
//mesma quantidade de pontos. A principio nao e a ideia complicar muito as coisas agora.

int main (void) {
	
	char n[30], nMais[30], nMenos[30];
	int i = 1, p, q, pMais = 0, pMenos = 30; //Aqui eu dei um valor para pMenos para nao
						 //dar problema no if la em baixo.
	
	while (i <= 4){ //Coloquei so 4 para poder relizar testes, mas o correto seria 20
		p = 0;
		printf("Digite o nome do %dº time: ", i);
		scanf("%s", n);
		printf("Digite a quant. de vitorias do %s: ", n);
		scanf("%d", &q);
		p = q*3; 
		printf("Digite a quant. de empates do %s: ", n);
		scanf("%d", &q);
		p = p + q;
		printf("Digite a quant. de derrotas do %s: ", n);
		scanf("%d", &q);
		//Nao precisa fazer calculo aqui

		if (p > pMais) {
			strcpy(nMais, n);
			pMais = p;
		}
		if (p < pMenos) {
			strcpy(nMenos, n);
			pMenos = p;
		}
		i = i+1;
	}
	printf ("O time com mais pontos e o %s e tem %d pontos!\n", nMais, pMais);
	printf ("O time com menos pontos e o %s e tem %d pontos!\n", nMenos, pMenos);
		
	return 0;
}
