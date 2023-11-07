#include <bits/stdc++.h>
using namespace std;


int cont;

void merge(vector<int> &arr, int l, int m, int r);
 
void mergeSort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
         

        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
 

void merge(vector<int> &arr, int l, int m, int r)
{
    vector<int> temp(r - l + 1);
  

    int i = l, j = m + 1, k = 0;
    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            cont += (m - i + 1);  // Conta as trocas virtuais
        }
    }

    while (i <= m) {
        temp[k++] = arr[i++];
    }

    while (j <= r) {
        temp[k++] = arr[j++];
    }

    for (int p = 0; p < k; p++) {
        arr[l + p] = temp[p];
    }


    
  
}
 




 

 

int main()

{

   

        long long int tl;
       
        int n;
        vector<int> v;
		cin >> tl;
        while (tl > 0)
        {
            

			
			cont=0;    
            for(int i = 0; i < tl; i++ )
            {                
				cin >> n;
				v.push_back(n);
            }
       		
//       		cout << "===Antes===\n";
//       		for(int i = 0; i < tl; i++ )
//            {                
//				cout << v[i] << " | ";
//            }
//            cout << endl;
            	
			mergeSort(v, 0,v.size()-1);
            if(cont % 2 == 1)
   				cout << "Marcelo\n";
   			else
   				cout << "Carlos\n";         
					 
//			cout << "===Depois===\n";
//       		for(int i = 0; i < tl; i++ )
//            {                
//				cout << v[i] << " | ";
//            }
//            cout << endl;       
			v.clear(); 		
			cin >> tl;
        }

   
	return 0;
   

 

}
