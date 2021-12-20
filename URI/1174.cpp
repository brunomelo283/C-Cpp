#include<stdio.h>
#define TF 100

int main()
{
	int i;
	float vetA[TF];
	for(i=0;i<TF;i++)
		scanf("%f", &vetA[i]);
	for(i=0;i<TF;i++)
		if(vetA[i] <= 10)
			printf("A[%d] = %.1f\n", i,vetA[i]);								
	return 0;
}

