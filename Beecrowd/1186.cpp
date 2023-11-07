#include "stdio.h"
#include "string.h"
#define TF 12

int main(){
	float  mat[TF][TF],soma = 0,media,cont=0;
	int l,c,i;
	char operacao[1];
	fflush(stdin);
	scanf("%c", &operacao);

	for(l=0;l<TF;l++)
		for(c=0;c<TF;c++)
			scanf("%f", &mat[l][c]);
	if(operacao[0] == 'S')
	{	
		soma=0;		
		for(i=1,l=TF-1;l>TF-TF;l--,i++)
			for(c=l-l+i;c <TF;c++)
				soma += mat[l][c];
		printf("%.1f\n", soma);
	}	
	else
	{
		soma=0;
		for(i=1,l=TF-1;l>TF-TF;l--,i++)
			for(c=l-l+i;c <TF;c++)
			{
				soma += mat[l][c];
				cont+=1;
			}
		media = soma/cont;
		printf("%.1f\n", media);
	}
	return 0;	
}


