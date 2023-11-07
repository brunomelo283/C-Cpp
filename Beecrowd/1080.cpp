#include<stdio.h>



int main(void){
	int i,num, pos, nAnt=0;
	
	
	
	for(i=0; i < 100; i++)
	{
		scanf("%d", &num);
		
		if(num > nAnt){
			nAnt = num;
			pos = i+1;
		}
		
	}
	printf("%d\n%d\n", nAnt, pos);
	return 0;
}
