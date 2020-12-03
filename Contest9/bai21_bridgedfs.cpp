#include<bits/stdc++.h>
using namespace std;
int v,e,x,y;
vector<int> ke[10005];
int visited[10005];
void reInit()
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
		ke[b].push_back(a);
	}
	reInit();
}
void dfs(int u)
{
	visited[u] = 1;
	for(int i = 0; i < ke[u].size(); i++)
		if(!visited[ke[u][i]] && (u != x || ke[u][i] != y) && (u != y || ke[u][i] != x))
			dfs(ke[u][i]);
}
int demlt()
{
	int tplt = 0;
	for(int i = 1; i<=v; i++)
	{
		if(!visited[i])
		{
			tplt++;
			dfs(i);
		}
	}
	return tplt;
}
void bridge()
{
	
	x = 0; y = 0;
	int k = demlt();
	for(int i = 1; i <= v; i++)
	{
		for(int j = 0; j < ke[i].size(); j++)
		{
			if(i<ke[i][j])
			{
				reInit();
				x = i;
				y = ke[i][j];
				if(demlt() > k) cout<<x<<" "<<y<<" ";
			}
		}
	}
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		init();
		bridge();
		cout<<endl;
	}
	return 0;
}

