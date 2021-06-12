//O programa está definido para cadastrar 3 pessoas ao invés de 10 (para facilitar a correção, caso tenha algum erro)
//Este programa não se preocupa em economizar espaço, já que este é o desafio do próximo exercício (Ex 7)
//Acredito que este programa pode ser reestruturado de uma forma bem melhor, mas por enquanto vai ficar assim mesmo


#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct Pessoa{
	char nome[64];	
	int idade;
	int peso;
};

void preenchePessoa(struct Pessoa* p){
	for (int i=0; i<3; i++){
		printf("\n%dª pessoa: \n", i+1);	
		printf("Digite o nome: ");
		scanf("%s", p[i].nome);		
		printf("Digite a idade: ");
		scanf("%d", &p[i].idade);
		printf("Digite o peso: ");
		scanf("%d", &p[i].peso);
	}
}

void cadastraVetor(FILE* f, struct Pessoa* p){
		fwrite(p, sizeof(struct Pessoa), 3, f);	
}
	
void leVetor(FILE* f, struct Pessoa* p){		
		fread(p, sizeof(struct Pessoa), 3, f);
}

void lePessoa(FILE* f, struct Pessoa* p, int n, bool e){  	//Aqui eu sobrescrevo cada pessoa que é lida
							// até chegar na pessoa desejada
	for (int i=0; i<n; i++){
		fread(p, sizeof(struct Pessoa), 1, f);	
	}	
	//fread(p, sizeof(struct Pessoa), n, f);
	if(e == true){
		printf("%s - %d anos - %d Kg\n", (*p).nome, (*p).idade, (*p).peso);
	}
	
}

void cadastraPessoa(FILE* f){
	struct Pessoa pAux;	
	struct Pessoa cp;
	int n;
	printf("Digite qual pessoa(1-10) você quer cadastrar, sobrescrevendo a que já está lá: ");
	scanf("%d", &n);
	printf("Digite o nome: ");
	scanf("%s", cp.nome);		
	printf("Digite a idade: ");
	scanf("%d", &cp.idade);
	printf("Digite o peso: ");
	scanf("%d", &cp.peso);	

	lePessoa(f, &pAux, n-1, false);
	fwrite(&cp, sizeof(struct Pessoa), 1, f);
	
}

void exibeVetor(struct Pessoa* p){
	for (int i=0; i<3; i++){
		printf("\n%dª pessoa: \n", i+1);	
		printf("%s - %d anos - %d Kg\n", p[i].nome, p[i].idade, p[i].peso);
	}
}

void exibePessoa(FILE* f){
	struct Pessoa lp;
	int n;
	printf("Digite qual pessoa(1-10) você quer ler: ");
	scanf("%d", &n);
	lePessoa(f, &lp, n, true);
}




int main (void){
	struct Pessoa p[10];
	struct Pessoa p1;
	preenchePessoa(p);
	
	FILE* f1 = fopen("/home/samuel/Documentos/Ex-8/Ex806.txt", "wb");	
	cadastraVetor(f1, p);
	fclose(f1);

	FILE* f2 = fopen("/home/samuel/Documentos/Ex-8/Ex806.txt", "rb");
	leVetor(f2, p);
	fclose(f2);
	exibeVetor(p);
	
	FILE* f3 = fopen("/home/samuel/Documentos/Ex-8/Ex806.txt", "rb");	
	exibePessoa(f3);
	fclose(f3);
	
	FILE* f4 = fopen("/home/samuel/Documentos/Ex-8/Ex806.txt", "r+");	
	cadastraPessoa(f4);
	fclose(f4);
	
	//Aqui eu exibo o vetor novamente para testar se o recadastramento funcionou
	f2 = fopen("/home/samuel/Documentos/Ex-8/Ex806.txt", "rb");
	leVetor(f2, p);
	fclose(f2);
	exibeVetor(p);
	
	return 0;
}
