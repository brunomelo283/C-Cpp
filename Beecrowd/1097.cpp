#include<stdio.h>




int main(void){
	int i, j,k=1;
	
	
	for(i=1, j = i + 6; i < 10; )
	{
			
			printf("I=%d J=%d\n", i,j);
			j--;
			if(k % 3 == 0)
			{
				i = i+2;
				j= i + 6;
			}
				
		
		k++;
	}
	
	return 0;
}
