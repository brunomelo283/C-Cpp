#include<stdio.h>

int main(){
    int num, i=0,contp=0,conti=0,contn=0,contpos=0;
    
    while(i < 5){
        scanf("%d", &num);
        if(num % 2 == 0)
            contp++;        
        else
            conti++;
        if(num < 0)
            contn++;
        if(num>0)
            contpos++;        
        i++;
    }
    printf("%d valor(es) par(es)\n", contp);
    printf("%d valor(es) impar(es)\n", conti);
    printf("%d valor(es) positivo(s)\n", contpos);
    printf("%d valor(es) negativo(s)\n", contn);
    return 0;
}
