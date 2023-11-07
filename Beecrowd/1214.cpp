#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	int c, qa, n, cont;
	double per, media,sum;
	vector<int> vet;
	
	cin >> c;
	while(c > 0){
		cin >> qa;
		cont = 0;
		sum=0;
		vet.clear();
		for(int i=0; i < qa; i++)
		{
			cin >> n;					
			vet.push_back(n);
			sum += n;
		}
		
		
		media = sum/qa;
		
		for(int i=0; i < vet.size(); i++){
			if(vet[i] > media)
				cont++;
		}
		
		per = (double)cont/qa;
		per = per * 100.0;
		
		printf("%.3lf%\n", per);
		c--;
	}
	return 0;
}
