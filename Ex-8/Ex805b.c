#include<stdio.h>
#include<string.h>

void escreva_string (FILE* f, char* str){
	for (int j=0; j<strlen(str); j++){
		fputc(str[j], f);
	}
}


int main (void){
	FILE* f = fopen("/home/samuel/Documentos/Ex-8/Ex805b.txt", "w");
	char p[10][26];

	for (int i=0; i<10; i++){
		printf("Digite a %dª palavra: ", i+1);
		scanf("%s", p[i]);
	}
	
	//Aqui eu passo linha por linha para a função, então na verdade eu estou passando um vetor de cada vez
	// ou pelo menos parece ser o que está acontecendo
	for (int i=0; i<10; i++){
		escreva_string(f, p[i]);
	}	
	
	fclose(f);
	

	return 0;
}
