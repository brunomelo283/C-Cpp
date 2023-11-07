#include<stdio.h>
#include<math.h>
int main(){
	int N, i=0, cont=1,quadrado=0, cubo=0;
	scanf("%d",&N);
	while(N > i)
	{
		quadrado = pow(cont,2);
		cubo = pow(cont,3);
		printf("%d %d %d\n", cont, quadrado, cubo);
		cont++;
		i++;
	
	}
	return 0;
}
