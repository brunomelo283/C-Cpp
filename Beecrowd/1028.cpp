#include<stdio.h>


int main(void)
{
	int n, resto, n1, n2, maior, menor;
	
	scanf("%d", &n);
	while(n > 0)
	{
		scanf("%d %d", &n1, &n2);		
		if(n1 > n2)
		{
			maior = n1;
			menor = n2;
		}						
		else
		{
			maior = n2;	
			menor = n1;
		}
					
		do
		{			
			resto = maior % menor;
			maior = menor;
			menor = resto;
		}while(resto != 0);
		
		printf("%d\n", maior);
		n--;
	}
}
