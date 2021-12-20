#include<stdio.h>

int main(){
	int hor_i, min_i,hor_f, min_f, hor, min;
	scanf("%d %d %d %d",&hor_i, &min_i,&hor_f,&min_f);

	hor = hor_f - hor_i;
	min = min_f - min_i;		
	if(hor < 0)
	{
		hor = 24 + hor;
	}
	if(min < 0)
	{
		if(hor == 0)		
		{		
			hor = 24;					
			min = 60 + min;
			hor--;
		}
		else
		{		
			min = 60 + min;
			hor--;
		}
	}
	
	if(hor_i == hor_f && min_i == min_f)
	{
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
	else
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hor, min);
	return 0;	
}

