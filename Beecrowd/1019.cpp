#include<stdio.h>

int main(){
	int n, h, m=0, s=0,r1;
	scanf("%d", &n);
	h = n/60/60;
	m = n/60;
	s = n % 60;
	if(m > 60)
	{
		m = n/60;
		m = m % 60;
	
	}
	printf("%d:%d:%d\n", h,m,s);
	return 0;
}

