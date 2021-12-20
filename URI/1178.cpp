#include<stdio.h>
#define TF 100
int main(){
	double vetX[TF],x;
	int i;
	scanf("%lf", &x);
	for(i=0;i<TF;i++)
	{
		if(i==0)
			vetX[i] = x;
		else
			vetX[i] = vetX[i-1]/2;
	}
	for(i=0;i<TF;i++)
		printf("N[%d] = %.4lf\n", i,vetX[i]);	
	return 0;
}

