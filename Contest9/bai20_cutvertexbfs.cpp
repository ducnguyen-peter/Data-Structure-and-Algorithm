#include<bits/stdc++.h>
using namespace std;
int v, e;
vector<int> ke[10005];
int visited[10005];
int dem;
void reInit()
{
	memset(visited,0,sizeof(visited));
}
void init()
{
	cin>>v>>e;
	for(int i = 0; i < 10005; i++)
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
	memset(visited,0,sizeof(visited));
	dem = 0;
}
void bfs(int u)
{
	queue<int> q;
	q.push(u);
	visited[u] = 1;
//	dem++;
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
//				dem++;
			}
		}
	}
//	return dem;
}
int demlt()
{
	int tplt = 0;
	for(int i = 1; i <= v; i++)
	{
		if(!visited[i])
		{
			bfs(i);
			tplt++;
		}
	}
	return tplt;
}
void cutvertex()
{
	reInit();
	int k = demlt();
	for(int i = 1; i<=v; i++)
	{
		reInit();
		visited[i] = 1;
		if(demlt()>k) cout<<i<<" ";
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		init();
		cutvertex();
		cout<<endl;
	}
	return 0;
}

