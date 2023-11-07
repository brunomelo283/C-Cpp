#include "stdio.h"
#include "string.h"

int main(){
	int teste1,teste2,teste3,teste4,teste5,teste6,teste7;
	char p[15],p2[15],p3[15];
	char t1[] = "vertebrado", t2[] = "ave", t3[] = "carnivoro", t4[] = "onivoro";
	char t5[] = "inseto", t6[] = "hematofago";
	scanf("%s",&p);
	scanf("%s",&p2);
	scanf("%s",&p3);
	teste1 = strcmp(p, t1);
	teste2 = strcmp(p2, t2);
	teste3 = strcmp(p3, t3);
	teste4 = strcmp(p3, t4);
	teste5 = strcmp(p2, t5);
	teste6 =  strcmp(p3, t6);
	teste7 = strcmp(p3, t6);
	if(teste1 == 0)
	{
		if(teste2 ==  0)//vertebrado
		{
			if(teste3 ==  0)//carnivoro
				printf("aguia\n");
			else //onivoro
				printf("pomba\n");							
		}
		else //mamifero
		{
			if(teste4 == 0)//onivoro
				printf("homem\n");
			else//herbivoro
				printf("vaca\n");
		}
	}
	else //invertebrado
	{
		if(teste5 == 0)//inseto
		{
			if(teste6 == 0)//hematofago
				printf("pulga\n");
			else //herbivoro
				printf("lagarta\n");
			
		}
		else//anelideo
		{
			if(teste7 == 0)//hematofago
				printf("sanguessuga\n");
			else//onivoro
				printf("minhoca\n");
		}
	}
	return 0;	
}



