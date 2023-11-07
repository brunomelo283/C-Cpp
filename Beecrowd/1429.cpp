#include<iostream>
#include<cmath>
using namespace std;

int fatorial(int n){
	if(n == 0 || n == 1)
		return 1;
	else
		return n * fatorial(n-1);
}

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
	int c, dig, qd, fat, sum;
	
	cin >> c;
	
	while(c != 0){
		sum = 0;
		qd = qtdDigitos(c);
		for(int i=qd; i > 0; i--){
			dig = getDigito(c, i);
			fat = fatorial(i);
			sum += dig * fat;
			
		}
		cout << sum << endl;
		cin >> c;
	}
	return 0;
}
