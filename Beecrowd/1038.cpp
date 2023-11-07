#include<stdio.h>

int main(){
	int cod;
	float qtd, res;
	scanf("%d", &cod);
	scanf("%f", &qtd);
	switch(cod)
	{
		case 1: 
			res = qtd * 4.00;
			printf("Total: R$ %.2f\n", res);
			break;
		case 2:
			res = qtd * 4.50;
			printf("Total: R$ %.2f\n", res);
			break;
		case 3:
			res = qtd * 5.00;
			printf("Total: R$ %.2f\n", res);
			break;
		case 4:
			res = qtd * 2.00;
			printf("Total: R$ %.2f\n", res);
			break;
		case 5:
			res = qtd * 1.50;
			printf("Total: R$ %.2f\n", res);
			break;
		
	}
	return 0;
}

