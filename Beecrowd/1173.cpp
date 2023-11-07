#include<stdio.h>
#define TF 10

int main(){
	int num,vetN[TF],i;
	scanf("%d", &num);
	for(i=0;i<TF;i++)
	{
		if(i==0)	
			vetN[i] = num;
		else
			vetN[i]	 = vetN[i-1]*2;
	}			
	for(i=0;i<TF;i++)
		printf("N[%d] = %d\n", i,vetN[i]);
		
		
	return 0;
}


