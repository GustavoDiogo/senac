#include<stdio.h>
#include<stdlib.h>

void maiorelemento(int *c, int A[],int size);
void countingsort(int *c, int A[]);

int main(){

 	int A[] ={1,2,3,4,5,5,6,7,8};
  	int size = sizeof(A)/sizeof(int);

  	int *c;
  	maiorelemento(&c,&A,size);
  	printf("O maior elemento eh %d\n", c);
  	countingsort(&c,&A);
 	
 	getch();
	return 0;
}

void maiorelemento(int *c, int *A,int size){
	int i, aux = 0;
	for(i = 0;i<size;i++){
		if(A[i] > aux){
		aux = A[i];
		
		}
	}
	*c = aux;
}

void countingsort(int *c, int *A) {
    int i;
    int *aux;
   
    aux = malloc(*c * sizeof(int));
   
    printf("O FODENDO VALOR DO PONTEIRO DE *C eh %d\n", *c);
   
    for(i =0;i <=*c;i++)
    {
        aux[A[i]] += 1;
        printf("%d ", aux[A[i]]);
    	
     }
    for(i = 0;i<=*c;i++){
    	if(A[i+1] != NULL){
		aux[A[i]] += aux[A[i+1]];
        printf("%d ", aux[A[i]]);
    	}
	}
    free(aux);
    
}
