#include <stdio.h> 

struct Personagem{
        int forca;
        int energia;
        int experiencia;

};

struct Personagem preencheA (void){
        struct Personagem p;        
        printf ("Digite a força do personagem: ");
        scanf("%d", &(p.forca));
        printf ("Digite a energia do personagem: ");
        scanf("%d", &(p.energia));
        printf ("Digite a experiência do personagem: ");
        scanf("%d", &(p.experiencia));


        return p;
}

int main (void) {
        struct Personagem p1 = preencheA();
        struct Personagem p2 = preencheA();
        printf("(%d,%d,%d) vs (%d,%d,%d)\n",
                p1.forca, p1.energia, p1.experiencia,
                p2.forca, p2.energia, p2.experiencia);

        return 0;
}
