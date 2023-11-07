#include<iostream>
using namespace std;


int main(void){
	long long int h,o,t;

	
	
	while(cin >> h){
		cin >> o;
		
		t = o - h;
		
		if(t < 0){
			t = -t;
		}
		cout << t << endl;
		
	}
	return 0;
}
