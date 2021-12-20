#include<stdio.h>
#include<string.h>
#define TF 12

int main(){
	float mat[TF][TF],soma=0,cont=0;
	int l,c,i;
	char operacao[10];
	
	fflush(stdin);
	scanf("%s", &operacao);
	for(l=0;l<TF;l++)
		for(c=0;c<TF;c++)
			scanf("%f", &mat[l][c]);
	
	if(operacao[0] == 'S')
	{
		for(l=1;l<TF/2;l++)		
			for(c=0;c<l && c<(TF/2)-1;c++)			
				soma += mat[l][c];
		for(l=6,i=0;l<TF-1;l++,i++)		
			for(c=4-i;c>=0;c--)			
				soma += mat[l][c];
	
		printf("%.1f\n", soma);													
	}
	else if(operacao[0] == 'M')
	{
		soma = 0;
		for(l=1;l<TF/2;l++)		
			for(c=0;c<l && c<(TF/2)-1;c++)			
			{
				soma += mat[l][c];
				cont++;
			}
		for(l=6,i=0;l<TF-1;l++,i++)		
			for(c=4;c>=0;c--)			
			{
				soma += mat[l][c];
				cont++;
			}		
		printf("%.1f\n", soma/cont);		
	}
	return 0;
}

