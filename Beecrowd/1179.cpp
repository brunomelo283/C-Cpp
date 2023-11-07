#include "stdio.h"
#define TF 5

int main(){
	int i, j,k,vetn[TF*3], par[TF], impar[TF];
	
	for(i=0;i<TF*3;i++)
		scanf("%d", &vetn[i]);
	i=0;
	j=0;
	k=0;
	for(i=0;i<TF*3;i++)
	{
		if(j < TF)
		{
			if(vetn[i] % 2 == 0)
			{
				par[j] = vetn[i];
				j++;
			}			
			else 
				if(k <TF)
				{
					impar[k] = vetn[i];
					k++;
				}
				else
				{	
					k=0;
					while(k < TF)
					{
						printf("impar[%d] = %d\n", k, impar[k]);
						k++;					
					}
					k=0;
					i = i-1;
				}		
		}			
		else
		{	
			j=0;
			while(j < TF)
			{
				printf("par[%d] = %d\n", j, par[j]);
				j++;
			}
			j=0;
			i =	i-1;
		}
			
	}
	i=0;
	while(i < k)
	{
		printf("impar[%d] = %d\n", i, impar[i]);
		i++;
	}
	i=0;
	while(i < j)
	{
		printf("par[%d] = %d\n", i, par[i]);
		i++;
	}
	return 0;		
}

