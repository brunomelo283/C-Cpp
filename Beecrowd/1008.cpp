#include<stdio.h>

int main(){
	int num,hor;
	float valor, total;
	scanf("%d %d %f", &num, &hor, &valor);
	total = valor * hor;
	
	printf("NUMBER = %d\n", num);
	printf("SALARY = U$ %.2f\n",total);
	return 0;
}

