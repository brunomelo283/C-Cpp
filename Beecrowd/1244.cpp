#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include<algorithm>
using namespace std;



    
void bubbleSort(vector<string> &vet, int fim)
    {
       int i, j;
       int TL2 = fim;
       string aux;
       for(i=TL2; i >= 1; i--)
       {
           for(j=0; j <= i-1; j++)
           {
               if(vet[j+1].size() > vet[j].size())
               {
                   aux = vet[j];
                   vet[j] = vet[j+1];
                   vet[j+1] = aux;
               }
           }
       }
    }


int main(void){

    int n;
    string str;
    cin >> n;
    std::cin.ignore();
    while(n > 0){
    	
     	getline(std::cin, str);

    	vector<string> tokens;
        string token;
		istringstream ss(str);
        

        while (ss >> token) {
           tokens.push_back(token);            
        }
        
        
        bubbleSort(tokens,  tokens.size()-1);
				
		for(int i=0; i < tokens.size() - 1; i++)
		{
			cout << tokens[i] << " ";
		}
		
		cout << tokens[tokens.size() - 1] << "\n";
		
    	n--;    	
	}
    return 0;
}
