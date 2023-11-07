#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    
    int n1, n2, n;

    map<int, int> mp;

    while(cin >> n && n)
    {

        for(int i=0; i < n; i++)
        {
            cin >> n1 >> n2;

            if(n1 > n2)
                mp[1]++;
            else if(n1 < n2)
                mp[2]++;
            
        }

        cout << mp[1] << " " <<  mp[2] << endl;
        mp.clear();
    }
    return 0;
}