#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int qtdDigitos(int n) {
        if (n == 0) {
            return 1;
        }
        int cont = 0;
        while (n > 0) {
            cont++;
            n /= 10;
        }
        return cont;
}

int getDigito(int num, int digito)
{
    int d = pow(10, digito-1);
    return (num/d) % 10;
}




int main(void){
	int n1, n2, qn1, qn2, maior, dign1, dign2, sum, carry,cont;
	
	
	cin >> n1;
	cin >> n2;
	
	while(n1 > 0 || n2 > 0){
		cont = 0;
		carry=0;
		qn1 = qtdDigitos(n1);
		qn2 = qtdDigitos(n2);
		
		maior = max(qn1, qn2);
		
		for(int i=1; i<=maior; i++){
		
			dign1 = getDigito(n1, i);
			dign2 = getDigito(n2, i);
			
			sum = dign1 + dign2 + carry;
			
			if(sum >= 10) {
				cont++;
				carry=1;
			}else{
				carry=0;
			}
		}
		
		
		if(cont == 1){
			cout << "1 carry operation.\n";
		}
			
		else if(cont > 1){
			cout << cont <<  " carry operations.\n";
		}else{
			cout << "No carry operation.\n";
		}
			
		
		
		cin >> n1;
		cin >> n2;
	}
	return 0;
}
