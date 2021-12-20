#include<stdio.h>
#define pi 3.14159

int main(){
    double R, volume, raio;
    scanf("%lf", &R);
    raio = R * R  * R;
    volume = (4/3.0) * pi * raio;
    printf("VOLUME = %.3f\n", volume);
    return 0;
}
