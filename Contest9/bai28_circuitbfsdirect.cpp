#include<bits/stdc++.h>
using namespace std;
int v,e,x,y;
int visited[10005];
vector<int> ke[10005];

void reinit()
{
	memset(visited,0,sizeof(visited));
}

void init()
{
	cin>>v>>e;
	for(int i = 0; i <= v; i++)
	{
		ke[i].clear();
	}
	for(int i = 0; i < e; i++)
	{
		int a, b; 
		cin>>a>>b;
		ke[a].push_back(b);
	}
	memset(visited,0,sizeof(visited));
}
int bfs(int u)
{
	queue<int>q;
	q.push(u);
	visited[u] = 1;
	while(!q.empty())
	{
		int s = q.front(); q.pop();
		for(int i = 0; i < ke[s].size(); i++)
		{
			int t = ke[s][i];
			if(!visited[t])
			{				
				q.push(t);
				visited[t] = 1;
			}
			else if(t==u) return 1;
		}
	}
	return 0;
}
int circuit()
{
	for(int i = 1; i <= v; i++)
	{
		memset(visited,0,sizeof(visited));
		if(bfs(i)) return 1;
	}
	return 0;
}
int main()
{
	int t; cin>>t;
	while(t--){
		init();
		if(circuit()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
