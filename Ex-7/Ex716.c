#include<stdio.h>
#include<string.h>
#include<stdbool.h>


struct Ponto {
	int x;
	int y;
	int z;

};

union Ponto {	
	struct Ponto ps;
	int pv[2];

};

int main (void) {
	int sub;
	printf("Digite 0 para preencher o Ponto ou 1 para preencher o vetor.");
	scanf("%d", &sub);
	
	

	return 0;
}
