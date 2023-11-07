#include <bits/stdc++.h>

using namespace std;

int Busca(vector<int> v, vector<int> v2, int pi)
{

    for(int i=0; i < v.size(); i++)
    {
        if(v[i] == v2[pi])
            return i;
    }
    
    return -1;
}

int main(void)
{

    int n, k, d, aux, elem, pos, pi;

    vector<int> v, v2;

    while (cin >> n)
    {
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            v.push_back(k);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> k;
            v2.push_back(k);
        }

        for (int i = 0; i < n; i++)
        {
            while (v[i] != v2[i])
            {
                
                pos = Busca(v, v2, i);                                  
                swap(v[pos-1], v[pos]);
                c++;
               
            }
        }

        cout << c << endl;
        v.clear();
        v2.clear();
    }
    return 0;
}
