#include<stdio.h>



int main(void){
	int n, m, i, soma, t=0,aux;
	
	
	scanf("%d %d", &n, &m);
	
	while(t != 1 )
	{
		soma = 0;
		if(n > m){
			aux = m;
			m = n;
			n = aux;
		}
	
		if(n < m)
			for(i = n; i <= m; i++)
			{
				printf("%d ", i);
				soma += i;
			}
			printf("Sum=%d\n", soma);
				
		scanf("%d %d", &n, &m);
		if(n <= 0 || m <= 0)
			t = 1;
	}
	
	return 0;
}
