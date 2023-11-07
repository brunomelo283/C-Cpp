#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n,k,c;
    cin >> n;
    unordered_map<int, int> mp;

    for(int i=0; i < n; i++)
    {
        cin >> k;
        if(!mp[k+1])
            c++;
        else
            mp[k+1]--;
        
        mp[k]++;
    }

    cout << c << endl;
    return 0;
}

