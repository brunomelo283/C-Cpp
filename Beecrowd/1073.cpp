#include<stdio.h>

int main(){
	int N, qdr, cont=1;
	N=0;
	scanf("%d", &N);	
	while(cont<= N && N > 5 && N < 2000)
	{
		if(cont % 2 == 0)
		{
			
			printf("%d^2  = %d\n", cont,cont*cont);
		}
		cont++;
	}
	return 0;
}
