#include<stdio.h>   //Como eu faltei a aula de sexta que explicava sobre union, decidi já fazer algo funcional para aprender
#include<string.h>


struct Pessoa {
	int sub;	
	union {
		int rg;
		int cpf;
		char nome[50];
	};
};

void exibe (struct Pessoa* p){
	switch((*p).sub){
		case 0:
			printf("RG: %d\n", (*p).rg);
			break;

		case 1:
			printf("CPF: %d\n", (*p).cpf);
			break;

		case 2:
			printf("Nome: %s\n", (*p).nome);
			break;

		default:
			printf("Erro\n");
			break;
	}
}

int main (void){
		
	struct Pessoa pessoa;
	
	printf("Digite 0 para RG, 1 para CPF e 2 para Nome: ");
	scanf("%d", &pessoa.sub);

	switch(pessoa.sub){
		case 0:
			printf("Digite o RG: ");
			scanf("%d", &pessoa.rg);
			break;
		case 1:
			printf("Digite o CPF: ");
			scanf("%d", &pessoa.cpf);
			break;

		case 2:
			printf("Digite o nome: ");
			scanf("%s", pessoa.nome);
			break;

		default:
			printf("Erro\n");
			break;
	}
	
	exibe(&pessoa);

	return 0;
}
