#include "stdio.h"
#define TF 12

int main(){
	float  mat[TF][TF],soma = 0,media,cont=0;
	int l,c,col;
	char operacao[5];
	scanf("%d", &col);
	fflush(stdin);		
	scanf("%s", &operacao);
	for(l=0;l<TF;l++)
		for(c=0;c<TF;c++)
			scanf("%f", &mat[l][c]);
	if(operacao[0] == 'S')
	{
		soma = 0;
		for(l=0;l<TF;l++)
			soma += mat[l][col];
		printf("%.1f\n", soma);
	}
	else if(operacao[0] == 'M')
	{
		soma = 0;
		for(l=0;l<TF;l++)
		{
			soma += mat[l][col];
			cont+=1;
		}
		media = soma/cont;
		printf("%.1f\n", media);
	}	
	return 0;
}

