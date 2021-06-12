#include <stdio.h>

int main (void) {
	
	float km;
	int m;
	printf("Digite a velociade atual e milhas/h:" );
	scanf("%d", &m);
	km = m * 1.6;
	
	if (km < 80){
		printf ("Esta a %.2fkm/h, ACELERE!\n", km);	
	} else {
		if (km >= 80 && km <= 100) {
			printf ("Esta a %.2fkm/h, MANTENHA!\n", km);	
		} else {
			printf ("Esta a %.2fkm/h, DESACELERE!\n", km);	
		}
	}
	
	return 0;
}
