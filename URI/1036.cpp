#include<stdio.h>
#include<math.h>

int main(){
	double A, B,C, X1, X2,delta;
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	delta = B*B - 4*A*C;
	X1 = (-B + sqrt(delta))/(2*A);
	X2 = (-B - sqrt(delta))/(2*A);
	if(delta >= 0 && A != 0)
	{
	printf("R1 = %.5lf\n", X1);
	printf("R2 = %.5lf\n", X2);	
	}
	else
	{
	printf("Impossivel calcular\n");
	}
	return 0;
}

