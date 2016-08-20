#include<stdio.h>
#include<stdlib.h>

int buscalinear(int A[],int chave,int n){
    int i;
    for(i=0;i<n;i++){
    	if(chave == A[i]){
    	return i;
    	}
    }
    return -1;
}

int main(void){
    int x[10] = {12,5,19,30,3,11,28,4,10,9};
    int valor,tamanho;
    printf("Digite o valor que deseja buscar dentro do valor\n");
    scanf("%d",&valor);
    printf("Digite o tamanho do vetor\n");
    scanf("%d",&tamanho);
    if(buscalinear(x,valor,tamanho)!= -1){
    printf("O valor esta localizado em x[%d]\n",buscalinear(x,valor,tamanho)); 
    }
    else{
    printf("O valor nao pertence ao vetor\n");     
    }
    
    system("PAUSE");
    return 0;
    
}
