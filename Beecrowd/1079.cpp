#include<stdio.h>



int main(void){
	int n,i;
	float n1,n2,n3;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		scanf("%f", &n1);
		scanf("%f", &n2);
		scanf("%f", &n3);
		
		printf("%.1f\n", (n1*0.2) + (n2*0.3) + (n3 * 0.5));
	}
	return 0;
}
