#include <stdio.h> 


struct Atleta {
        char nome[50];
        float altura;
        int peso;
        int gols;
};

void exibir (struct Atleta a1, struct Atleta a2, struct Atleta a3) {
        printf("%s - Altura: %.2f, Peso: %d, Gols: %d\n", a1.nome, a1.altura, a1.peso, a1.gols);
        printf("%s - Altura: %.2f, Peso: %d, Gols: %d\n", a2.nome, a2.altura, a2.peso, a2.gols);
        printf("%s - Altura: %.2f, Peso: %d, Gols: %d\n", a3.nome, a3.altura, a3.peso, a3.gols);
}

int main (void) {
        struct Atleta a1 = {"Robson", 1.80, 80, 230};
        struct Atleta a2 = {"Neymar", 1.70, 75, 735};
        struct Atleta a3 = {"Juninho", 1.65, 70, 390};
        exibir(a1, a2, a3);

        return 0;
}
