#include<bits/stdc++.h>
using namespace std;
int v,e;
vector<int> ke[10005];
int visited[10005];
void init()
{
	cin>>v>>e;
	for(int i = 0 ; i < 10005; i++)
	{
		ke[i].clear();
	}
	for(int i = 0; i < e; i++)
	{
		int a, b; cin>>a>>b;
		ke[a].push_back(b);
		ke[b].push_back(a);
	}
	memset(visited,0,sizeof(visited));
}
void bfs(int u)
{
	queue<int> q;
	q.push(u);
	visited[u] = 1;
	while(!q.empty())
	{
		int s = q.front(); q.pop();
		for(int i = 0; i < ke[s].size(); i++)
		{
			if(!visited[ke[s][i]])
			{
				int t = ke[s][i];
				q.push(t);
				visited[t] = 1;
			}
		}
	}
}
int lienthong()
{
	int tplt = 0;
	for(int i = 1; i <= v; i++)
	{
		if(!visited[i])
		{
			tplt++;
			bfs(i);
		}
	}
	return tplt;
}
int main()
{
	int t; cin>>t;
	while(t--){
		init();
		cout<<lienthong()<<endl;
	}
	return 0;
}

