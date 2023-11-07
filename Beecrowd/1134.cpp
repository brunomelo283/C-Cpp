#include<stdio.h>

int main(){
	int alcool=0,gasolina=0,diesel=0,N;
	scanf("%d", &N);
	
	while(N != 4)
	{
		if(N == 1)
			alcool++;
		if(N == 2)
			gasolina++;
		if(N == 3)
			diesel++;
		scanf("%d", &N);
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
	return 0;
}
