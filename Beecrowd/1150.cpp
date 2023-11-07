#include<stdio.h>

int main(void)
{
	int x,z, i=0,cont=0;
	
	scanf("%d", &x);
	scanf("%d", &z);
	while(z <= x){
		scanf("%d", &z);	
	}
	i=x;
	while(i < z){
		i = x + ++i;
		cont++;
	}
	
	printf("%d\n", cont);
	return 0;
} 
