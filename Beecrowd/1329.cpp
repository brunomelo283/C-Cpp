#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    int n, k;
    map<int, int> mp;

    while (cin >> n && n)
    {

        for (int i = 0; i < n; i++)
        {
            cin >> k;

            mp[k]++;
        }

        cout << "Mary won " << mp[0] << " times and John won "  << mp[1] << " times" << endl;
        mp.clear();
    }

    return 0;
}
