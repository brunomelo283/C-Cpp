#include<stdio.h>
#define TF 12

int main(){
	double mat[TF][TF],soma=0,cont=0;
	int l,c,i;
	char operacao[10];
	
	scanf("%s", &operacao);
	for(l=0; l<TF;l++)
		for(c=0;c<TF;c++)
			scanf("%lf", &mat[l][c]);
	if(operacao[0] == 'S')
	{
		for(l=TF-1,i=0;l>6;l--,i++)
			for(c=i+1;c<=l-1;c++)					
				soma += mat[l][c];
		printf("%.1lf\n", soma);
	}
	else if(operacao[0] == 'M')
	{
		soma =0;
		for(l=TF-1,i=0;l>6;l--,i++)
			for(c=i+1;c<=l-1;c++)
			{
				soma += mat[l][c];
				cont++;
			}									
		printf("%.1lf\n", soma/cont);
	}
	return 0;
}

