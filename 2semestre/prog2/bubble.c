#include<stdio.h>
#include<stdlib.h>

int bubble(int *A,int n){
	int i,j,temp;
	for (i = 0; i < n-1; ++i)
	{
		for (j=n-1; j > i; j--)
		{
			if(A[j]<A[j-1]){
				temp = A[j];
				A[j] = A[j-1];
				A[j-1] = temp;
			}
		}
	}
    
}

int main(void){
   int i,x[10] = {12,5,19,30,3,11,28,4,10,9};
   bubble(x,10);
   printf("A reorganização de x[10] = ");
   for (i = 0; i < 10; ++i){
   	printf("%d ", x[i]);
   }
   system("PAUSE");
    return 0;
    
}
