#include<stdio.h>
#include<string.h>


int main(void){
	char nome[15], nome2[15] = "Thor";
	int c, forca, i=0;
		scanf("%d", &c);
	while(i < c){
		scanf("%d", &forca);
		scanf("%s", &nome);
		if(strcmp(nome, nome2) == 0)
			printf("Y\n");
		else
			printf("N\n");
		i++;
	}
	return 0;
}
