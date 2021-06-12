#include<stdio.h>
#include<string.h>

void escreva_string (FILE* f, char* str){
	int t = strlen(str);
	for (int i=0; i<t; i++){
    	    fputc(str[i], f);
	
   	}
}

int main (void){

	char p[26];
    
    	FILE* f = fopen("/home/samuel/Documentos/Ex-8/Ex805a.txt", "w");

   	printf("Digite uma palavra de no máximo 25 caracteres: ");
   	scanf("%s", p);
	
	escreva_string(f, p);
 	
   	fclose(f);

	return 0;
}
