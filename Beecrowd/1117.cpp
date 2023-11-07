#include<stdio.h>

int main(){
	float nota,media, valido=0, soma = 0;
	
	while(valido < 2){
		scanf("%f", &nota);
		if(nota >= 0 && nota <= 10)
		{
			soma = soma + nota;
			valido++;
		}
		else
			printf("nota invalida\n");		
	}
	media = soma/2;
	printf("media = %.2f\n", media);
	return 0;
}

