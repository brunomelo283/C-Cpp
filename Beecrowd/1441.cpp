#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, h, maior;

    while (cin >> n && n)
    {
        maior = n;
        while (true)
        {
            if (n == 1)
                break;
            if (n % 2 == 0) // par
            {
                n /= 2;
            }
            else
            {
                n = n * 3 + 1;
            }

            maior = max(maior, n);
        }
        cout << maior << endl;
    }

    return 0;
}