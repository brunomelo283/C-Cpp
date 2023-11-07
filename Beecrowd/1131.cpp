#include<stdio.h>


int main(void){
	int j=0, resp, i,g, conti=0, contg=0, conte=0;
	
	
	while(resp != 2)
	{
		scanf("%d %d", &i, &g);		
		if(i > g)
			conti++;
		else if(g > i)
			contg++;
		else
			conte++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &resp);		
		j++;
	}
	
	printf("%d grenais\n", j);
	printf("Inter:%d\n", conti);
	printf("Gremio:%d\n", contg);
	printf("Empates:%d\n", conte);
	
	if(conti > contg)
		printf("Inter venceu mais\n");
	else if(contg > conti)
		printf("Gremio venceu mais\n");
	else
		printf("Nao houve vencedor\n");
	return 0;
}
