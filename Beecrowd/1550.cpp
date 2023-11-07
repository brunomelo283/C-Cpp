#include<bits/stdc++.h>

using namespace std;

int b,niv;

struct grafo{
	map<int, vector<int> > adj;
	map<int, bool> 	vis;
};



int inverter(int b)
{
    int s=0;
    while(b > 0)
    {
        s = s*10 + (b % 10);
        b /= 10;
    }
    return s;
}

void bfs(int ini)
{
	grafo g;
	queue<int> n, key;
	int atual;
	n.push(0);
	key.push(ini);
	
	while(true){
		niv = n.front();
		n.pop();
		atual = key.front();
		key.pop();
	
		if(atual == b)
		{
			printf("%d\n", niv);
			return;
		}
		g.vis[atual] = true;
		g.adj[atual].push_back(atual+1);
		g.adj[atual].push_back(inverter(atual));	
		
		for(auto e : g.adj[atual])	
		{
			if(!g.vis[e])
			{
				n.push(niv+1);
				key.push(e);
				g.vis[e] = true;
			}				
		}
	}	
}

int main(void){
	
	int t, a;
	
	scanf("%d", &t);
	
	while(t--)
	{
		scanf("%d %d", &a, &b);		
		bfs(a);			
	}
	return 0;
}
