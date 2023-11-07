#include<stdio.h>


int main(void){
	int n1,n2, aux, soma=0,i;
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	if(n1 > n2)
	{
		aux = n2;
		n2 = n1;
		n1 = aux;
	}
	
	for(i=n1; i <= n2; i++)
	{
		if(i % 13 != 0)
			soma = soma + i;
	}
	
	printf("%d\n", soma);
	return 0;
}

