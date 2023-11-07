#include<stdio.h>

int main(){
	double valor;
	int n100,n50,n20,n10,n5,n2,m1,m50,m25,m10,m5,m01;
	scanf("%lf", &valor);
	valor = valor *100;
	n100 = valor/10000;
	valor = (int)valor % 10000;
	n50 = valor/5000;
	valor = (int)valor % 5000;
	n20 = valor/2000;
	valor = (int)valor % 2000;
	n10 = valor/1000;
	valor = (int)valor % 1000;
	n5 = valor/500;
	valor = (int)valor % 500;
	n2 = valor/200;
	valor = (int)valor % 200;	
	m1 = valor/100;
	valor = (int)valor % 100;
	m50 = valor/50;
	valor =  (int)valor % 50;
	m25 = valor/25;
	valor = (int)valor % 25;
	m10 = valor/10;
	valor = (int)valor % 10;
	m5 = valor/5;
	valor = (int)valor % 5;
	m01 = valor/1;
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", m1);
	printf("%d moeda(s) de R$ 0.50\n", m50);
	printf("%d moeda(s) de R$ 0.25\n", m25);
	printf("%d moeda(s) de R$ 0.10\n", m10);
	printf("%d moeda(s) de R$ 0.05\n", m5);
	printf("%d moeda(s) de R$ 0.01\n", m01);
	return 0;
}


