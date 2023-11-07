#include<stdio.h>
#include<math.h>



int main(void){
	
	int r, l, qtde;
	double c, res;
	
	scanf("%d %d", &r, &l);
	c = pow(r,3);
	
	
	double v =  static_cast<double>(4) / 3;
	
	res = v * 3.1415 * c;
	
		
	qtde = l/res;
	printf("%d\n", qtde);
	return 0;
}
