#include<stdio.h>

void imprimir_soma(int, int);

int main(void){
	int liminf,limsup;
	scanf("%d %d", &liminf, &limsup);
	imprimir_soma(liminf, limsup);
	return 0;
}

void imprimir_soma(int li, int lf){
	
	int soma=0;

	if( li > lf){
		int swap = lf;
		lf = li;
		li = swap;
	}

	if( li % 2 == 1)
		li++;

	for(int i=li;i<=lf; i+=2){
		soma += i;
	}

	printf("SOMA = %d\n", soma);

}