#include<stdio.h>
#include<string.h>
#define TF 12
int main(){
	double mat[TF][TF],soma=0;
	int l,c,cont=0;
	char operacao[10];

	fflush(stdin);
	scanf("%s", &operacao);
	for(l=0;l<TF;l++)
		for(c=0;c<TF;c++)
			scanf("%lf", &mat[l][c]);

		if(operacao[0] == 'S')		
		{
			for(l=0;l<(TF/2)-1;l++)
				for(c=l+1;c<TF-(l+1);c++)
					soma+= mat[l][c];
			printf("%.1lf\n", soma);
		}
			
		
		else if(operacao[0] == 'M')
		{
			soma = 0;
			for(l=0;l<(TF/2)-1;l++)
				for(c=l+1;c<TF-(l+1);c++)
			{
				soma += mat[l][c];
				cont++;							
			}	
			printf("%.1lf\n", soma/cont);
		}	
	return 0;
}



