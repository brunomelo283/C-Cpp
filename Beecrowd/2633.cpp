#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct ca {
    int dt;
    string str;
};




int main(void){

    int n;
    int k;
    ca c; 
    ca aux;
   	
    


    while(cin >> n){
		ca vetc[n];
		k=0;
        for(int i =0; i < n; i++){
            cin >> c.str;
            cin >> c.dt;

            vetc[k] = c;
            int j=k;

            while(j>0 && vetc[j-1].dt > vetc[j].dt){
                aux = vetc[j-1];
                vetc[j-1] = vetc[j];
                vetc[j] = aux;
                j--;
            }
        	k++;
            
        }

        for(int i=0; i < n-1; i++){
            cout << vetc[i].str << " ";
        }
		 cout << vetc[n-1].str;
        cout << "\n";
        

    }
    return 0;
}
