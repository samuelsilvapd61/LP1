#include<stdio.h>

int main (void){
        int vet[5] = {2, 4, 6, 8, 10};
        int n;

        for (int i=0; i<5; i++) {
                printf("%d \n", vet[i]);
        }

        printf("Digite o índice (0-4) que quer remover: ");
        scanf("%d", &n);

        for (n; n<4; n++) {
                vet[n] = vet[n+1];   
                   
        }
        vet[4] = 0;
        
        for (int i=0; i<5; i++) {
                printf("%d \n", vet[i]);
        }

        return 0;
}
