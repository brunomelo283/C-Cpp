#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    long long int n, comp, x;

    while (cin >> n)
    {
        long long int v[n];

        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 1; i < n; i++)
        {
            v[i] = v[i - 1] + v[i];
        }

        x = -1;

        for (int i = 0; i < n-1; i++)
        {
            long long comp = v[n - 1] - v[i];
            long long int a;
            if (i == 0)
                x = abs(v[i] - comp);
            else
            {
                a = abs(v[i] - comp);
                x = min(x, a);
            }
        }

        cout << x << endl;
    }
}
