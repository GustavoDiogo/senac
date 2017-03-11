
#include <stdio.h>

typedef struct pilha{
	int* p;
	int topo;
	int tamanho;
} TPilha;

TPilha* CriaPilha(int k){
	TPilha* pilha;
	pilha = (TPilha *)malloc(sizeof(TPilha));
	pilha->p = (int *)malloc(k*sizeof(int));
	pilha->topo = 0;
	pilha->tamanho = k;
	return pilha;
}

int PilhaVazia(TPilha* p){
	if (p->topo == 0) return 1;
	return 0;
}

int PilhaCheia(TPilha* p){
	if (p->topo == p->tamanho) return 1;
	return 0;
}

void InseriPilha(TPilha* pilha,int elemento){
	if (PilhaCheia(pilha)){
		printf("ERRO: PILHA CHEIA\n");
		return;
	}
	pilha->p[pilha->topo] = elemento;
	pilha->topo++;
}

int RemovePilha(TPilha* pilha){
	if (PilhaVazia(pilha)){
		printf("ERRO: PILHA VAZIA\n");
		return -1;
	}
	pilha->topo--;
	return(pilha->p[pilha->topo]);
}

void PrintPilha(TPilha* p){
	int i;
	for (i = 0; i < p->topo; i++){
		printf("%d \n", p->p[i]);
	}
}


//Teste Pilha

#include <stdio.h>
#include "Pilha.h"

void main(){
	TPilha* pilha;

	pilha = CriaPilha(10);
	InseriPilha(pilha, 1);
	InseriPilha(pilha, 2);
	InseriPilha(pilha, 3);
	InseriPilha(pilha, 4);
	InseriPilha(pilha, 5);
	InseriPilha(pilha, 6);

	PrintPilha(pilha);

	RemovePilha(pilha);
	RemovePilha(pilha);
	RemovePilha(pilha);

	PrintPilha(pilha);

	InseriPilha(pilha, 7);

	PrintPilha(pilha);

	getch();

}
