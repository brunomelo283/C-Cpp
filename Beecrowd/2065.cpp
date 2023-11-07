#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int> > > pq;
    pair<int, int> p;
    vector<int> v;
    int n,m,k,maior=0;
    cin >> n >> m;

    for(int i=0;i < n; i++)
    {
        cin >> k;
        v.push_back(k);
    }

    for(int i=0; i < m; i++)
    {
        cin >> k;
        if(i < n)
            pq.push({k*v[i], i});
        else
        {
            p = pq.top();pq.pop();
            pq.push({k*v[p.second]+p.first,p.second});
        }

    }

    while(!pq.empty())
    {
        p = pq.top();pq.pop();
        maior = max(maior, p.first);
    }

    cout << maior << endl;

    return 0;
}
