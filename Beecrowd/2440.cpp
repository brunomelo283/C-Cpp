#include <bits/stdc++.h>

using namespace std;

map<int, bool> visited;
map<int, vector<int>> adj;






void dfs(int v)
{
    
    if(visited[v])
        return;
    visited[v] = true;    
    for (auto e:adj[v])             
            dfs(e);
            
        
            
}

int main(void)
{
    int m, n, mem1, mem2;
    int c=0;
    cin >> m >> n;

    while(n--)
    {
        cin >> mem1 >> mem2;
        adj[mem1].push_back(mem2);
        adj[mem2].push_back(mem1);
    }

    for(int i=1; i <= m; i++)
    {
        if(!visited[i])
        {
            c++;
            dfs(i);
        }
            
    }

    cout << c << endl;

    
    return 0;
}