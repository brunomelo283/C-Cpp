#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, t, c = 0;
    char l;
    int v[61];

    while (cin >> n && n)
    {
        c = 0;
        memset(v, 0, sizeof(v));
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            cin >> l;

            if (l == 'D')
            {
                if (v[t] < 0)
                    c++;
                ++v[t];
            }
            else
            {
                if (v[t] > 0)
                    c++;
                --v[t];
            }
        }

        cout << c << endl;
    }

    return 0;
}