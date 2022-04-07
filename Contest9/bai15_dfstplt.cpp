#include<bits/stdc++.h>
using namespace std;
int v,e;
vector<int> ke[10005];
int visited[10005];
void init()
{
	cin>>v>>e;
	for(int i = 0; i < 10005; i++)
	{
		ke[i].clear();
		visited[i] = 0;
	}
	for(int i = 0; i < e; i++)
	{
		int a, b; cin>>a>>b;
		ke[a].push_back(b);
		ke[b].push_back(a);
	}
}
void dfs(int u)
{
	visited[u] = 1;
	for(int i = 0; i < ke[u].size(); i++)
	{
		if(visited[ke[u][i]]==0)
		{
			dfs(ke[u][i]);
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
			dfs(i);
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
		memset(visited,0,sizeof(visited));
	}
	return 0;
}

