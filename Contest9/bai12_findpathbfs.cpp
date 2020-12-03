#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include<map>
using namespace std;
int v, e, u, r;
vector<int> ke[10005];
int visited[10005];
int pre[10005];
void init()
{
	cin>>v>>e>>u>>r;
	for(int i = 0; i < 10005; i++)
	{
		ke[i].clear();
		visited[i] = 0;
		pre[i] = 0;
	}
	for(int i = 0; i < e; i++)
	{
		int a, b;
		cin>>a>>b;
		ke[a].push_back(b);
		ke[b].push_back(a);
	}
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
		{
			if(visited[ke[s][i]]==0)
			{
				int t = ke[s][i];
				q.push(t);
				visited[t] = 1;
				pre[t] = s;
			}
		}
	}
}
void find_path(int s, int t)
{
	vector<int> path;
	if(pre[t] == 0) cout<<-1<<endl;
	else{
		path.push_back(t);
		int u = pre[t];
		while(u!=s)
		{
			path.push_back(u);
			u = pre[u];
		}
		path.push_back(s);
	}
	reverse(path.begin(), path.end());
	for(int i = 0; i < path.size(); i++)
	{
		cout<<path[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		init();
		bfs(u);
		find_path(u, r);
	}
	return 0;
}

