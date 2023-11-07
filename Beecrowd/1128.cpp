#include <bits/stdc++.h>

using namespace std;

int visited[2010];
int mat[2010][2010];

void dfs(int v, int n)
{

    visited[v] = true;
    for (int i = 1; i <= n; i++)
        if(mat[v][i])
            if(!visited[i])
                dfs(i , n);
}

int main(void)
{
    int m, n, mem1, mem2, p;
    bool flag = false;
    int c = 0;
   
    while (scanf("%d %d", &m, &n), m  && n )
    {
        memset(mat, 0, sizeof(mat));
        
        while (n--)
        {
            scanf("%d %d %d", &mem1, &mem2, &p);
            
            if (p == 1)
            {
                mat[mem1][mem2] = 1;
            }
            else
            {
                mat[mem1][mem2] = mat[mem2][mem1] = 1;
            }
        }

        flag = false;
        for (int i = 1; i <= m; i++)
        {
            memset(visited, 0, sizeof(visited));
            dfs(i, m);           
            for (int j = 1; j < m && !flag; j++)
            {
                if (!visited[j])
                {
                    flag = true;
                }
            }

            if (flag)
                break;
        }
        
        int v = flag ? 0 : 1;
        printf("%d\n", v);
        
    }

   
    return 0;
}