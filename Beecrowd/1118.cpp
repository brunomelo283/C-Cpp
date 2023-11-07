#include<stdio.h>


int main(void){
	float nota, media, soma=0, c=0;
	int resp;
	
	
	while(resp != 2){		
		scanf("%f", &nota);
		
		if(nota >= 0 && nota <= 10) 
		{
			soma += nota;
			c++;
		}
		else{
			printf("nota invalida\n");
		}
		if(c == 2){
			media = soma/2;
			printf("media = %.2f\n", media);
			c=0;
			soma=0;
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &resp);			
			while(resp != 1 && resp != 2)
			{
				printf("novo calculo (1-sim 2-nao)\n");
				scanf("%d", &resp);	
			}
		}
		
	}
	
	return 0;
}
