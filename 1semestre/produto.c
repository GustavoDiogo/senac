#include<stdio.h>

void imprimir_soma(int, int);

int main(void){
	int liminf,limsup;
	scanf("%d %d", &liminf, &limsup);
	imprimir_soma(liminf, limsup);
	return 0;
}

void imprimir_soma(int li, int lf){
	
	int produto1=0;

	if( li > lf){
		int swap = lf;
		lf = li;
		li = swap;
	}

	if( li % 3 == 1)
		li++;

	for(int i=li;i<=lf; i*=3){
		soma *= i;
	}
	if( li % 5 == 1)
		li++;

for(int i=li;i<=lf; i*=5){
		soma *= i;
	}
	printf("produto = %d\n", soma);

}
