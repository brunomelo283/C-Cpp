#include<stdio.h>
#define TF 10

int main(){
	int i, num,vetX[TF];
	
	for(i=0;i<TF;i++)
		scanf("%d", &vetX[i]);
		
	for(i=0;i<TF;i++)
		if(vetX[i] <= 0)
			vetX[i] = 1;
		
	for(i=0;i<TF;i++)	
		printf("X[%d] = %d\n", i,vetX[i]);		
	return 0;
}

