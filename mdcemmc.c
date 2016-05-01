#include<stdio.h>

void mdc(int x,int y){
	int resto,temp2,temp3,t;
	temp2=x;
	temp3=y;
	resto=x%y;
	while(resto!=0){
	x=y;
	y=resto;
	resto=x%y;
	t=temp2*temp3/y;
	}
	printf("MDC(A,B) = %d\nMMC(A,B) = %d\n", y,t);

} 

int main(void){
	int x,y;
	scanf("%d %d", &x, &y);
	mdc(x, y);
	return 0;
}