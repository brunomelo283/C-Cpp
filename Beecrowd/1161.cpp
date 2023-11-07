#include<iostream>
using namespace std;

long long int fatorial(long long int n){
	
	if(n==0 || n==1)
		return 1;
	else 
		return n * fatorial(n-1);
}

int main(void){
	long long int n1, n2, r1,r2, sum;
	
	
	
	while(cin >> n1){
		cin >> n2;
		r1 = fatorial(n1);
		r2 = fatorial(n2);
		sum = r1 + r2;
		cout << sum << "\n";
	}
	
	return 0;
}
