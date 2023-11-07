#include<iostream>
#include<cmath>

using namespace std;



int main(void){
	
	double t, x, s, r1, r2;
	
	cin >> t;
	
	while(t > 0){
		
		
		
		s = t*7;
		
		x = s/90;
		
		r1 = ceil(x);
		
		s = t*1;
		x = s/90;
		
		r2 = floor(x);
		
		
		cout << "Brasil " << (int)r2 << " x Alemanha " << (int)r1 << "\n";
		
		
		cin >> t;
	}
	
	return 0;
}
