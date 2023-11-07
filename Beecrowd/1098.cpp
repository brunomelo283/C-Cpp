#include<stdio.h>




int main(void){
	int k=1;
	double i, j;
	
	
	for(i=0, j = 1; i <= 2; )
	{
			if(i==0 || i==1 || i==2 && j==0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5)
				printf("I=%.0lf J=%.0lf\n", i,j);
			else if(i==0 || i==1 || i==2)
				printf("I=%.0lf J=%.1lf\n", i,j);
			else if(j==0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5)
				printf("I=%.1lf J=%.0lf\n", i,j);
			else 
				printf("I=%.1lf J=%.1lf\n", i,j);
			j = j+1;
			if(k % 3 == 0)
			{
			 	i = i + 0.2;	
				j = i + 1;
			}
				
		
		k++;
	}
	
	return 0;
}
