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
	
void todos_os_primos(int n){
	for (int i = 2; i <= n; i++){		
		if (eh_primo(i) == 1){
			printf("O número %d é primo.\n", i);
		}
	}
}

int main (void){
	
	int n;
		
	printf("Digite um número para saber quais primos existem de 1 até ele: ");
	scanf("%d", &n);	
	todos_os_primos(n);
	
	return 0;
}
