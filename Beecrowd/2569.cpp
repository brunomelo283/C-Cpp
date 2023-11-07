#include<iostream>
#include<cmath>
#include<string>
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


string zeroNumsete(int res){
	string num("");
	int qtd, dig;
	qtd = qtdDigitos(res);
	for(int i=qtd; i>0; i--){
		dig = getDigito(res, i);
		
		if(dig == 7 && i < qtd) {
			num = num + "0";
		}else if(i < qtd){
			num = num + to_string(dig);
		}
	}
	
	return num;			
}

int main(void){
	int n1, n2,res, qtd, dig;
	string num(""), num1, num2;
	char op;
	
	
	cin >> n1;
	cin >> op;
	cin >> n2;
	
	
	if(op == '+'){
		num1 =  zeroNumsete(n1);
		num2 = 	zeroNumsete(n2);
		n1 = atoi(num1.c_str());
		n2 = atoi(num2.c_str());
		res = n1 + n2;		
		num = zeroNumsete(res);
	
		
	}else{
		num1 =  zeroNumsete(n1);
		num2 = 	zeroNumsete(n2);
		n1 = atoi(num1.c_str());
		n2 = atoi(num2.c_str());
		res = n1 * n2;
		num = zeroNumsete(res);
				
	}
	
	cout << num << endl;
	return 0;
}
