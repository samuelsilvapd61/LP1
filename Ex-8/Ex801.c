#include<stdio.h>
#include<string.h>

int main (void) {
    
    char p[26];
    
    FILE* f = fopen("/home/samuel/Documentos/Ex-8/Ex801.txt", "w");

    printf("Digite uma palavra de no máximo 25 caracteres: ");
    scanf("%s", p);
    int t = strlen(p);

    for (int i=0; i<t; i++){
	printf("%d \n", i+1);
        fputc(p[i], f);
	
    }
    fclose(f);

    return 0;
}
