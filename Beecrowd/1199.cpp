#include<iostream>
#include<string>
#include<cstdlib>
#include <algorithm> 

using namespace std;



string decimalToHexa(int dec){
	int n;
	string hex("");
	
	while(dec > 0){
		n = dec % 16;
		
		if(n == 10)
		{
				hex = hex + "A";
		}else if(n == 11)
		{
			hex = hex + "B";
		}else if(n == 12){
			hex = hex + "C";
		}else if(n == 13){
			hex = hex + "D";
		}else if(n == 14){
			hex = hex + "E";
		}else if(n == 15){
			hex = hex + "F";
		}else{
			hex = hex + to_string(n);
		}
		
		
			
		
	
		
		dec = dec/16;
	}
	return hex;
}

int main(void){
	string num;
	string hexa;
	string sub;
	long long int dec;
	
	getline(cin, num);
	
	while(num.compare("-1") != 0){
		
		
		if(num[1] == 'x')
		{
			sub = num.substr(2);
			dec = stoi(sub, 0, 16);
		   	cout << dec <<  "\n";
		}else{
			dec = atoi(num.c_str());
			hexa = decimalToHexa(dec);
			reverse(hexa.begin(), hexa.end());
			cout << "0x" << hexa << endl;
		}
		getline(cin, num);
	}
	return 0;
}
