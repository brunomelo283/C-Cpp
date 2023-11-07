#include<stdio.h>

int main(void){
	int c,s,i=0,num,j=0;
	scanf("%d", &c);
		s=1;
	while(i < c){	
		scanf("%d", &num);		
			if(num % 2 == 0)
				printf("0\n");
			else
				printf("1\n");
				
		i++;
				
	}

	return 0;
}

