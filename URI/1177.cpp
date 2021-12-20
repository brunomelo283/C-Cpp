#include<stdio.h>
#define TF 1000

int main(){
	int vetX[TF], i,j=0,t;
	
	scanf("%d", &t);
	if(t >= 2 && t <= 50)
	{
		for(i=0;i < TF;i++)
		{						
			if(j < t)
			{
				vetX[i] = j;
				j++;			
			}											
			else
			{
				j=0;
				vetX[i] = j;
				j++;
			}
				
		}					
		for(i=0;i<TF;i++)	
		printf("N[%d] = %d\n" ,i,vetX[i]);							
	}
	return 0;	
}

