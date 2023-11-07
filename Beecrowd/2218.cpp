#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    long long n, x, res;
    
  
    cin >> n;
    while (n--)
    {

        cin >> x;
        res = x * (x +1)/2 + 1;
        cout << res << endl;
    }
    return 0;
}
