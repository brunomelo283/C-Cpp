#include<stdio.h>

int main(){
	int x,i;
	scanf("%d", &x);
	
	while(x!=0)
	{
		i=1;	
		while(i < x)
		{
			i++;
			printf("%d ", i-1);	
			
		}
		printf("%d\n", i);	
		
		scanf("%d", &x);
		
	}
	return 0;
}
