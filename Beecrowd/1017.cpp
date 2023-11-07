#include<stdio.h>

int main(){
	float kmh, tempo, d;
	float litros;
	scanf("%f", &tempo);
	scanf("%f", &kmh);
	d = tempo * kmh;
	litros = d/12;
	printf("%.3f\n",litros);
	return 0;
}

