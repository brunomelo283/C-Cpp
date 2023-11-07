#include<stdio.h>


int main(void){
	int n, x, y, soma = 0,i;
	
	scanf("%d", &n);
	
	while(n > 0){
		soma = 0;
		scanf("%d %d", &x, &y);
		if(x < y){
			for(i = x+1; i < y; i++){
				if(i % 2 != 0)
					soma = soma + i;			
			}	
		}else{
			for(i = y+1; i < x; i++){
				if(i % 2 != 0)
					soma = soma + i;			
			}	
		}
		
		printf("%d\n", soma);
		n--;
	}
	return 0;
}
