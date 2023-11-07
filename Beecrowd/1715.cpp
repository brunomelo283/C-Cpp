#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m, c=0;
    int p=1;

    cin >> n >> m;

    int mat[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];

    for (int i = 0; i < n; i++)
    {
        p=1;
        for (int j = 0; j < m; j++)
        {
            if(mat[i][j] == 0)
            {
                p=0;
                break;
            }
        }

        if(p > 0)
            c++;
    }
    cout << c << endl;
    return 0;
}
