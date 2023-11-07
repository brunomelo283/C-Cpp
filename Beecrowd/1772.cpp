#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long int k, a, b;
    long long int n;
    long long int d, ma, mi;
    vector<long long int> v;

    cin >> n;
    cin >> k;

    bool aux;

    while (n != 0 && k != 0)
    {
        bitset<32> sbit(n);
        v.push_back(n);
        for (int i = 0; i < k; i++)
        {
            cin >> a >> b;
            aux = sbit[a];
            sbit[a] = sbit[b];
            sbit[b] = aux;
            d = sbit.to_ulong();
            v.push_back(d);
        }

        ma = v[0];
        mi = v[0];
        for (int i = 0; i < v.size(); i++)
        {
            if (ma <= v[i])
                ma = v[i];
            if (mi >= v[i])
                mi = v[i];
        }
        cout << v[v.size() - 1] << " " << ma << " " << mi << endl;

        cin >> n;
        cin >> k;
        v.clear();
    }
    return 0;
}