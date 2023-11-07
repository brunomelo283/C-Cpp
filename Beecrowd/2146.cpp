#include "stdio.h"
#define TF 9999
int main(){
	int n,senha,vetn[TF],TL,i;
	
	TL=0;
	scanf("%d", &n);
	while(n != 9999 && TL < TF)
	{
		
		
		vetn[TL] = n-1;
		TL++;
		if(TL < TF)
			scanf("%d", &n);

	}
	if(n == 9999)
		vetn[TL] = n-1;
		
	
	for(i=0;i<=TL;i++)
		printf("%d\n", vetn[i]);
	return 0;
}

