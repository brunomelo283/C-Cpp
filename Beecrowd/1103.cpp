#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int h1, m1, h2, m2;
    int sum1, sum2, dif;

    while (cin >> h1 >> m1 >> h2 >> m2)
    {
        if (!h1 && !m1 && !h2 && !m2)
            break;

        if (h1 == 0)
            h1 = 24;
        if (h2 == 0)
            h2 = 24;

        sum1 = h1 * 60 + m1;

        sum2 = h2 * 60 + m2;

        if(sum1 > sum2)
            dif = 1440 - (sum1-sum2);
        else if(sum1 < sum2)
            dif = sum2 - sum1;
        else 
            dif = 0;

        cout << dif << endl;
    }
    return 0;
}