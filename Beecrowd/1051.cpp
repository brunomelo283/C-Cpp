#include<stdio.h>

int main(){
	double sal, res;
	scanf("%lf", &sal);
	if(sal <= 2000.00)
	{
		printf("Isento\n");
	}
	else if(sal > 2000.00 && sal <= 3000)
		{
			res = (sal - 2000) * 0.08;
			printf("R$ %.2lf\n", res);
		}
		else if(sal > 3000.00 && sal <= 4500)
		{
			res = 1000 * 0.08 + (sal - 3000) * 0.18;
			printf("R$ %.2lf\n", res);
		}
		else if(sal > 4500)
		{
			res = 1000 * 0.08 + 1500 * 0.18 + (sal - 4500) * 0.28;
			printf("R$ %.2lf\n", res);
		}
	return 0;
}

