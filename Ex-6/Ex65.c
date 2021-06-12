#include <stdio.h>
#include <string.h>

int strlen2 (char** str) {
	int i = 0;
	while (**(str + i) != 0) {
		i = i+1;
	}
	return i;
}

void strjoin2 (char* d, char* o1, char* o2) {
	int i = 0, q1, q2;	
	q1 = strlen(o1);
	while (o1[i] != 0) {
		d[i] = o1[i];
		printf("%d - %c\n", i, d[i]);
		i = i+1;
		
	}
	i = 0;
	//q2 = strlen(o2);
	while (o2[i] != 0) {
		d[i+q1] = o2[i]; // i+q1 porque tem que começar depois da ultima letra de o1
		printf("%d - %c\n", q1+i, d[q1+i]);
		i = i+1;
		
	}

}

int main (void){
	char o1[4], o2[4], d[8];
	
	printf("Digite a primeira palavra: ");
	scanf("%s", o1);
	printf("Digite a segunda palavra: ");
	scanf("%s", o2);
	strjoin2(d, o1, o2);
	
	printf("A palavra destino é: %s\n", d);

	return 0;
}
