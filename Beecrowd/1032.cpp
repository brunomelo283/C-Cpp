#include <bits/stdc++.h>
#define MAXPRIMO 32650



using namespace std;
vector<int> v;

bool primo(int num)
{
    if(num == 1)
        return false;
    if(num <= 3)
        return true;
    if(num % 2 == 0 || num % 3 == 0)
        return false;

    for(int i=5; i * i <= num; i += 6)
    {
        if(num % i  == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

void getVectorPrimo(int maxPrimo) {
    for (int i = 2; i <= maxPrimo; i++) {
        if (primo(i)) {
            v.push_back(i);
        }
    }
}



int main(void)
{
    int n, num=1;
    
    getVectorPrimo(MAXPRIMO);

    while (cin >> n && n)
    {
        
        num =1;
        int result = 1;
        for(int i=1;i <= n;i++)		
		{            
			result = (result + v[n-i]) % i;
			
		}			
			
        
       
        cout << result+1 << endl;
        
    }

    return 0;
}