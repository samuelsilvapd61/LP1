#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int n){
	
	int i = 2;
	bool primo = true;
	while (i < n){
		if (n % i == 0){
			primo = false;
			break;
		}		
		i = i+1;
	}
	return primo;
}

int main (void){
	
	int n;
		
	printf("Digite um número para saber se é primo: ");
	scanf("%d", &n);	
	
	if (eh_primo(n) == 1) {
		printf ("O número %d é primo.\n", n);
	} else {
		printf ("O número %d não é primo.\n", n);
	}	
	
	return 0;
}
