#include<stdio.h>


int main(void)
{
	int i, x, y, j=1;
	
	
	scanf("%d %d", &x, &y);
	
	for(i = 1; i <= y; i++){
		printf("%d ", i);
		if(j == x-1)
		{
			i++;
			printf("%d", i);
			printf("\n");
			j=0;
		}
		j++;
	}
	return 0;
}
