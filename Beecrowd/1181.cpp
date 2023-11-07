#include<stdio.h>
#include<string.h>
#define TF 12
int main(){
	float mat[TF][TF],soma=0;
	int row,l,c,cont=0;
	char operacao[10];
	
	scanf("%d", &row);
	fflush(stdin);
	scanf("%s", &operacao);
	for(l=0;l<TF;l++)
		for(c=0;c<TF;c++)
			scanf("%f", &mat[l][c]);
	if(row < 12 && row >= 0)
	{
		if(operacao[0] == 'S')		
		{
			for(c=0;c<TF;c++)		
				soma += mat[row][c];
			printf("%.1f\n", soma);
		}
			
		
		else if(operacao[0] == 'M')
		{
			soma = 0;
			for(c=0;c<TF;c++)
			{
				soma += mat[row][c];
				cont++;
			
				
			}	
			printf("%.1f\n", soma/cont);
		}
		
	}
	return 0;
}


