#include<stdio.h>

int main(void){
	int n, t;
	float c=0,r=0,s=0, total =0 ;
	char caracter;
	
	
	scanf("%d", &n);
	
	while(n > 0){
		scanf("%d %c", &t, &caracter);
		
		
		if(caracter == 'C'){
			c += t;
		}else if(caracter == 'R'){
			r += t;
		}else{
			s += t;
		}						
		n--;
	}
	total = c + r + s;
	printf("Total: %.0f cobaias\n", total);
	printf("Total de coelhos: %.0f\n", c);
	printf("Total de ratos: %.0f\n", r);
	printf("Total de sapos: %.0f\n", s);
	printf("Percentual de coelhos: %.2f %%\n", (float)(c/total)*100);
	printf("Percentual de ratos: %.2f %%\n", (float)(r/total) * 100);
	printf("Percentual de sapos: %.2f %%\n", (float)(s/total) * 100);
	return 0;
}


