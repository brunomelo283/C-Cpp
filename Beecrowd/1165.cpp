#include<stdio.h>

int main(){
	int num=0,den=0, resto, i=0,cont=0;
	char primo;
	
	scanf("%d", &num);  	
  	i = 1;
  	cont = num;
  	while(i <= cont)
  	{	
  		scanf("%d", &num);	
  		den=2;
  		primo = 'S';
		while(den <= num/2)
		{
			resto = num%den;
			if(resto == 0)
			{
			fflush(stdin);
			primo = 'N';															
			}
			den++;
		}	
		
		i++;
		
		if(primo == 'S')
			printf("%d eh primo\n", num);
		else
			printf("%d nao eh primo\n", num);			  									
	}
	
	return 0;
}

