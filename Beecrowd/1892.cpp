#include <bits/stdc++.h>
using namespace std;

long long int cont=0;
vector<string> temp;

void merge(string arr[], int l, int m, int r);
 
void mergeSort(string arr[], int l, int r)
{
    if (l < r)
    {
         

        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m+1, r);
    }
}
 

void merge(string arr[], int l, int m, int r)
{
    
  

    int i = l, j = m, k = l;
    while (i <= m-1 && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            cont += (m - i);  
        }
    }

    while (i <= m-1) {
        temp[k++] = arr[i++];
    }

    while (j <= r) {
        temp[k++] = arr[j++];
    }

    for (i = l; i <= r; i++)
        arr[i] = temp[i];


    
  
}

int main(void){
	
	int qtd;	
	while(scanf("%d", &qtd) != EOF){
		cont=0;
		string cla[qtd];
		
		cin.ignore(1);
		for(int i=0; i < qtd; i++){		
			 
			 getline(cin, cla[i]);
		}
		temp.resize(qtd+1);
		mergeSort(cla, 0, qtd-1);	
		printf("%lld\n", cont);	
	}
	
	return 0;			
}







	
	
	
	
	

