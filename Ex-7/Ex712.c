#include<stdio.h>   //Como eu faltei a aula de sexta que explicava sobre union, decidi já fazer algo funcional para aprender

union Ident{
	int rg;
	int cpf;
	char nome[50];
};

struct Pessoa {
	union Ident id;
	int sub; 
};

void exibe (struct Pessoa* p){
	switch((*p).sub){
		case 0:
			printf("RG: %d\n", (*p).id.rg);
			break;

		case 1:
			printf("CPF: %d\n", (*p).id.cpf);
			break;

		case 2:
			printf("Nome: %s\n", (*p).id.nome);
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
			scanf("%d", &pessoa.id.rg);
			break;
		case 1:
			printf("Digite o CPF: ");
			scanf("%d", &pessoa.id.cpf);
			break;

		case 2:
			printf("Digite o nome: ");
			scanf("%s", pessoa.id.nome);
			break;

		default:
			printf("Erro\n");
			break;
	}
	
	exibe(&pessoa);

	return 0;
}
