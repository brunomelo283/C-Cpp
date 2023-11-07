#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, m, s;
    pair<int, int> pi;
    char k, cm,t;
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    char ref[4] = {'N', 'L', 'S', 'O'};
    int d;
    cin >> n >> m >> s;

    while (n && m && s)
    {
        char mat[n][m];
        int cont = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> k;
                if (k == 'N' || k == 'S' || k == 'L' || k == 'O')
                {
                    pi = {i, j};
                }
                mat[i][j] = k;
            }
        }

        
        int l = pi.first;
        int c = pi.second;
        for(int i=0; i < 4; i++)
            if(mat[l][c] == ref[i])
            {
                d = i; 
                break;
            }
                
        for (int i = 0; i < s; i++)
        {
            cin >> cm;
            if (cm == 'E')
            {
                d = (d + 3) % 4;
            }
            else if (cm == 'D')
            {
                d = (d + 1) % 4;
            }
            else if (l + dx[d] != n && c + dy[d] != m && l + dx[d] >= 0 && c + dy[d] >= 0)
            {
                t = mat[l + dx[d]][c + dy[d]];
                if (t != '#')
                {
                    mat[l][c] = '.';
                    if (t == '*')
                        cont++;
                    l += dx[d], c += dy[d];
                }
            }
        }

        cout << cont << endl;
        cin >> n >> m >> s;
    }
    return 0;
}