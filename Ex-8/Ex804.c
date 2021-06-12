#include<stdio.h>
#include<string.h>

int main(void) {
	FILE* f = fopen("/home/samuel/Documentos/Ex-8/Ex804.txt", "w");
	char p[10][26];

	for (int i=0; i<10; i++){
		printf("Digite a %dª palavra: ", i+1);
		scanf("%s", p[i]);
	}
	for (int i=0; i<10; i++){
		printf("%s\n", p[i]);
	}
	
	for (int i=0; i<10; i++){
		for (int j=0; j<strlen(p[i]); j++){
			fputc(p[i][j], f);
		}
	}
	fclose(f);
	

	return 0;
}
