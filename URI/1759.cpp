#include<stdio.h>
#include<string.h>
int main(){
	int N,i;	
	scanf("%d", &N);
	char mat[N][10], str[] = "Ho ";
	for(i=0;i < N-1;i++){
		strcpy(mat[i], str);
	}
	for(i=0;i < N-1;i++){
		printf("%s", mat[i]);
	}
	printf("Ho!\n");
	return 0;
}

