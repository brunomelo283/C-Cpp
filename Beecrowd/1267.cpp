#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, d, x;
    vector<int> v;

    while (cin >> n >> d && n)
    {
        v.resize(n, 1);
        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> x;
                v[j] = v[j] & x;
            }

        }

        //for(auto i : v)
        //    cout << i << " ";
        //cout << endl;

        int i;
        for(i=0; i < v.size(); i++)
        {
            if(v[i] == 1)
            {
                cout << "yes"  << endl;
                break;
            }
        }

        if(i == v.size())
            cout << "no" << endl;

        v.clear();

    }

    return 0;
}