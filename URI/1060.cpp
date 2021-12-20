#include "stdio.h"

int main(){
	int n=0,i=0;
	float num;
	while(n < 6)
	{
		scanf("%f", &num);
		if(num > 0)
			i++;
		n++;
	}
	printf("%d valores positivos\n", i);
	return 0;
}


