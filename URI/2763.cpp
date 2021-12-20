#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k;
	char cpf[25],vetCpf[4][25],cpf2[25];
	scanf("%s", &cpf);
	i=0;
	while(cpf[i] != 193){
		j=0;
		while(cpf[j] != 46)
		{
			
			strcpy(vetCpf[i],cpf2);
			j++;			
		}
		i++;
	}
	
		
	
	
	return 0;
}
