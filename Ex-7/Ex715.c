#include<stdio.h>
#include<string.h>
#include<stdbool.h>


struct  Anfibio{
	int patas;
	float espessura;
	bool cauda;
};


struct  Ave{
	float comprimento;
	bool autonomia;
	float frequencia;
};

struct  Mamifero{
	int dentes;
	float volume;
	float velocidade;
};

struct  Reptil{
	bool venenozo;
	bool autonomia;
	float espessura;
};

union Animal {
	struct Anfibio an;
	struct Ave av;
	struct Mamifero m;
	struct Reptil r;

};


int main (void){
	union Animal a1;
	union Animal a2;
	union Animal a3;
	union Animal a4;
	union Animal a5;
	union Animal a6;
	
	a1.an.patas = 4;
	a1.an.espessura = 2.5;
	a1.an.cauda = 1;
	
	a2.an.patas = 4;
	a2.an.espessura = 3;
	a2.an.cauda = 0;

	a3.av.comprimento = 10;
	a3.av.autonomia = 1;
	a3.av.frequencia = 45;

	a4.m.dentes = 30;
	a4.m.volume = 8;
	a4.m.velocidade = 70;

	a5.m.dentes = 34;
	a5.m.volume = 10;
	a5.m.velocidade = 50;
	
	a6.r.venenozo = 1;
	a6.r.autonomia = 1;
	a6.r.espessura = 3;
	

	return 0;
}
