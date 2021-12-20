#include<stdio.h>

int main(){
	int X, N, resto, i;
	scanf("%d", &X);
	for(i=1;i<=X;i++)
	{	
		scanf("%d", &N);
		resto = N % 2;
	
		if(resto == 0)
		{
			if(N == 0)
			{
				printf("NULL\n");
			}
			else if(N < 0)
			{
			printf("EVEN NEGATIVE\n");		
			}
			else
			{
			printf("EVEN POSITIVE\n");	
			}
			
			
		}
		else
		{
			if(N < 0)
			{
				printf("ODD NEGATIVE\n");
			}
			else
			{
				printf("ODD POSITIVE\n");	
			}		
		}	
	}
	return 0;
}

