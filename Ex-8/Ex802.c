//Aqui eu uso char pois considero que não vou receber nenhum número do arquivo (com exceção do EOF), então está tudo certo.

#include<stdio.h>
#include<string.h>

int main (void) {
	FILE* f = fopen("/home/samuel/Documentos/Ex-8/Ex801.txt", "r");
	char p[26];
	
	char a = fgetc(f);
	for (int i=0; a != EOF; i++) {
		p[i] = a;
		a = fgetc(f);
	}
	fclose(f);
	
	printf("%s\n", p);

	return 0;
}
