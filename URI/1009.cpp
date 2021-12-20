#include<stdio.h>

int main(){
	char nome[20];
	double sal, vendas,percent, total;	
	fflush(stdin);
	scanf("%s", &nome);
	scanf("%lf %lf", &sal, &vendas);
	percent = 0.15 * vendas;
	total = sal + percent;	
	printf("TOTAL = R$ %.2lf\n", total);	
	return 0;
}

