#include<stdio.h>
#define TF 20

int main(){
	int i,vetN[TF],aux;
	
	for(i=0;i<TF;i++)
		scanf("%d", &vetN[i]);
	
	for(i=0;i<TF/2;i++)
	{
		aux = vetN[i];
		vetN[i] = vetN[19-i];
		vetN[19-i] = aux;
	}
	for(i=0;i<TF;i++)
		printf("N[%d] = %d\n", i,vetN[i]);
	return 0;
}

