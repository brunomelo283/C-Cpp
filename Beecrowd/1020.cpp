#include<stdio.h>

int main(){
	int idade_d, dias,meses,anos;	
	scanf("%d", &idade_d);
	
	anos = idade_d/365;
	meses = (idade_d%365)/30;
	dias = (idade_d%365)%30;

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos,meses,dias);
	return 0;
}

