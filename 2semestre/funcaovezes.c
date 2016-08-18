#include<stdio.h>
#include<stdlib.h>

int vezes(int n, int m){
 int i;
 if(n == 0){
 	return 0;
 	}
 else if(n == 1){
 	return m;
 }
 else{
 return m+vezes(n-1,m);
 }
}
int main(void){
    int n,m;
    printf("Que numero voce quer multiplicar?\n");
    scanf("%d",&n);
    printf("Por quantas vezes voce quer multiplicar?\n");
    scanf("%d",&m);
    printf("Resultado de %d*%d eh igual a %d\n",n,m,vezes(n,m));

    system("PAUSE");
    
}
