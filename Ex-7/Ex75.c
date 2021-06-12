#include <stdio.h> 


struct Ponto {
        int x;
        int y;
        int z;
};

int main (void) {
        struct Ponto v1 = {1, 0, 5};
        struct Ponto v2 = {3, 3, 3};
        struct Ponto v3 = {0, 10, 0};

        printf("Coordenada y de v1 = %d, v2 = %d, v3 = %d.\n", v1.y, v2.y, v3.y);
        v1.z += 10;
        v2.z += 10;
        v3.z += 10;
        printf("v2 = (%d, %d, %d)\n", v2.x, v2.y, v2.z);

        return 0;
}
