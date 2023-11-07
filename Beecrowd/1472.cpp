#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
	
	int n, elem;
	int tot=0, cont,m;
	vector<int> vet;
	while(cin >> n){
		tot =0;
		cont =0;
		vet.clear();
		for(int i=0; i < n; i++){
			cin >> elem;
			tot = tot + elem;
			vet.push_back(tot);
		}
		
		m = tot/3;
		for(int i=0; i < n; i++)
		{
			if(binary_search(vet.begin(), vet.end(), vet[i] + m))
				if(binary_search(vet.begin(), vet.end(), vet[i] + 2*m))
					cont++;
		}
		
		
		cout << cont << endl;
		
		
		
	}
	
	return 0;
}
