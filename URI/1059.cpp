#include "stdio.h"

int main(){
	int i=1;
	while(i>=1 && i<=100)
	{
		if(i % 2 == 0)
			printf("%d\n", i);
		
		i++;
	}
	return 0;
}

