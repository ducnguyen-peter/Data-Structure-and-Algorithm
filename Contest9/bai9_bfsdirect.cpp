#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<queue>
using namespace std;
int v,e,u;
vector<int> ke[10005];
int visited[10005];
void init()
{
	cin>>v>>e>>u;
	for(int i = 0; i < 10005; i++) 
	{
		ke[i].clear();
		visited[i] = 0;
	}
	for(int i = 0; i < e; i++)
	{
		int a, b;
		cin>>a>>b;
		ke[a].push_back(b);
	}
}
void bfs(int u)
{
	queue<int>q;
	q.push(u);
	visited[u] = 1;
	cout<<u<<" ";
	while(!q.empty())
	{
		int s = q.front(); q.pop();
		for(int i = 0; i < ke[s].size(); i++)
		{
			if(visited[ke[s][i]]==0)
			{
				q.push(ke[s][i]);
				visited[ke[s][i]] = 1;
				cout<<ke[s][i]<<" ";
			}
		}
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		init();
		bfs(u);
	}
	return 0;
}

