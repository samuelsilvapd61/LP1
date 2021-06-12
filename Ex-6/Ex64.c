#include <stdio.h>
#include <string.h>

int strlen2 (char* str) {
	int i = 0;
	while (str[i] != 0) {
		i = i+1;
	}
	return i;
}

int main (void){
	char str[50];
	
	printf("Digite uma palavra: ");
	scanf("%s", str);
	
	printf("A quantidade de caracteres da palavra é: %d\n", strlen2(str));

	return 0;
}
