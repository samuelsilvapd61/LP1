#include <stdio.h>

void preenche(int arr[3][3], int l, int c){
	int n;	
	for (int i=0; i<l; i++){
		for (int j=0; j<c; j++){
			printf("Digite o valor a ser preenchido na posição %d,%d: ", i+1, j+1);
			scanf("%d", &n);
			arr[i][j] = n;
		}
	}
	printf ("\nA matriz preenchida está abaixo:\n");
	for (int i=0; i<l; i++){
		for (int j=0; j<c; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
	
	
float media (int arr[3][3], int l, int c){
	int soma = 0;
	float media;	
	for (int i=0; i<l; i++){
		for (int j=0; j<c; j++){
			soma = soma + arr[i][j];
		}
	}
	media = soma/(l*c);
	return media;
}
	
	
int main (void){	
	int arr[3][3];
	preenche(arr, 3, 3);
	printf("\nA média dos valores é: %.2f\n", media(arr, 3, 3));
		
	return 0;
}
