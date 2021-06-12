#include <stdio.h> 

struct Personagem{
        int forca;
        int energia;
        int experiencia;

};

int main (void) {
        struct Personagem p1;
        p1.forca = 50;
        p1.energia = 70;
        p1.experiencia = 90;
        struct Personagem p2 = {100, 200, 300};

        printf("p1 = %d, %d, %d.\n", p1.forca, p1.energia, p1.experiencia);
        printf("p2 = %d, %d, %d.\n", p2.forca, p2.energia, p2.experiencia);

        return 0;
}
