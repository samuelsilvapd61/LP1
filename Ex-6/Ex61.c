#include <stdio.h>

void preenche(int* vec, int n) {
        int i, soma = 0;
        float media;
        for (i = 0; i<n; i++) {
                printf("Preencha o %dº valor: ", i+1);
                scanf("%d", (vec + i));
                soma = soma + vec[i];
        }
        media = soma /n;
        printf("A média dos valores é: %.2f\n", media);
}

int main (void) {
        int vec[100];
        int n;

        printf("Digite o valor de n: ");
        scanf("%d", &n);        
        while (n < 1 || n > 100) {
                printf("Digite apenas valores entre 1 e 100!\n");
                printf("Digite o valor de n: ");
                scanf("%d", &n); 
        }
        
        preenche(vec, n);

        return 0;
}
