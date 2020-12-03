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
		ke[b].push_back(a);		
	}
	memset(visited,0,sizeof(visited));
}

void bfs(int u)
{
	queue<int>q;
	q.push(u);
	visited[u] = 1;
	while(!q.empty())
	{
		int s = q.front(); q.pop();
		for(int i = 0; i < ke[s].size(); i++)
			if(!visited[ke[s][i]] && (s != x || ke[s][i] != y) && (s != y || ke[s][i] != x))
			{
				int t = ke[s][i];
				q.push(t);
				visited[t] = 1;
			}
	}
}

int demlt()
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

void bridge()
{
	x = 0; y = 0;
	reinit();
	int k = demlt();
	for(int i = 1; i <= v; i++)
	{
		for(int j = 0; j < ke[i].size(); j++)
		{
			if(i<ke[i][j])
			{
				reinit();
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
	while(t--){
		init();
		bridge();
		cout<<endl;
	}
	return 0;
}

