//Neste programa, estamos preocupados em ocupar menos espaço no HD, então reduzimos o número de caracteres
// que o Nome ocupa no arquivo
//O programa está definido para cadastrar 3 pessoas ao invés de 10 (para facilitar a correção, caso tenha algum erro)
//Infelizmente neste programa há um problema na parte de recadastrar uma pessoa (cadastraPessoa) (que funciona no Ex-6), porque aqui
// se eu digitar um nome maior do que o nome que tinha anteriormente, o programa acaba "comendo" as informações
// da próxima pessoa. Já tive algumas ideias pra resolver isso, mas são complexas demais, acho que não é necessário...
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

void cadastraVetor(FILE* f, struct Pessoa* p){	//Aqui eu uso um 'int n' para guardar no arquivo o
						//  numero de caracteres que o nome da pessoa tem
	for (int i=0; i<3; i++){
		int n = strlen(p[i].nome);

		fwrite(&n, sizeof(int), 1, f);  //Aqui acontece o que foi descrito 
		fwrite(p[i].nome, sizeof(char), n, f);
		fwrite(&p[i].idade, sizeof(int), 1, f);
		fwrite(&p[i].peso, sizeof(int), 1, f);
	}	
	
}
	
void leVetor(FILE* f, struct Pessoa* p){ 	//Aqui eu uso um 'int n' para receber do arquivo o
						// numero de caracteres que o nome da pessoa tem
	for (int i=0; i<3; i++){
		int n;
		fread(&n, sizeof(int), 1, f);
		fread(p[i].nome, sizeof(char), n, f);
		fread(&p[i].idade, sizeof(int), 1, f);
		fread(&p[i].peso, sizeof(int), 1, f);
	}	
	
}

void lePessoa(FILE* f, struct Pessoa* p, int n, bool e){  	//Aqui eu sobrescrevo cada pessoa que é lida
	int j, t=0;						// até chegar na pessoa desejada
	for (int i=0; i<n; i++){
		fread(&j, sizeof(int), 1, f);
		for(int k=0; k<t; k++){
			(*p).nome[k] = 0;			//Aqui eu resolvo um problema chato de permanência de caracteres
		}					
		fread((*p).nome, sizeof(char), j, f);
		fread(&(*p).idade, sizeof(int), 1, f);
		fread(&(*p).peso, sizeof(int), 1, f);
		t = j;	
	}	
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
	int j = strlen(cp.nome);
	fwrite(&j, sizeof(int), 1, f);
	fwrite(cp.nome, sizeof(char), j, f);
	fwrite(&cp.idade, sizeof(int), 1, f);
	fwrite(&cp.peso, sizeof(int), 1, f);
	
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
	
	FILE* f1 = fopen("/home/samuel/Documentos/Ex-8/Ex807.txt", "wb");	
	cadastraVetor(f1, p);
	fclose(f1);

	FILE* f2 = fopen("/home/samuel/Documentos/Ex-8/Ex807.txt", "rb");
	leVetor(f2, p);
	fclose(f2);
	exibeVetor(p);

	FILE* f3 = fopen("/home/samuel/Documentos/Ex-8/Ex807.txt", "rb");	
	exibePessoa(f3);
	fclose(f3);
	
	//FILE* f4 = fopen("/home/samuel/Documentos/Ex-8/Ex807.txt", "r+");	//Aqui acontece o problema descrito lá em cima
	//cadastraPessoa(f4);
	//fclose(f4);
	
	//Esta parte abaixo só tem sentido se a parte acima que está com problema passar a funcionar

	//Aqui eu exibo o vetor novamente para testar se o recadastramento funcionou 
	//f2 = fopen("/home/samuel/Documentos/Ex-8/Ex806.txt", "rb");
	//leVetor(f2, p);
	//fclose(f2);
	//exibeVetor(p);
	
	return 0;
}
