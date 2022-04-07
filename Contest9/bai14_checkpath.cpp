#include<bits/stdc++.h>
#include<queue>
#include<vector>
#include<set>
using namespace std;
int v,e,u,r;
vector<int> ke[10005];
int visited[10005];
int pre[10005];
set<int> path;
void init()
{
	cin>>v>>e;
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
	queue<int> q;	
	q.push(u);
	path.insert(u);
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
				path.insert(t);
				visited[t]=1;
				pre[t] = s;
			}
		}
	}
}
bool find_path(int s, int t)
{
	if(pre[t]==0)
		return false;
	return true;
}
int main()
{
	int t; cin>>t;
	while(t--){
		init();
		int n; cin>>n;
		while(n--)
		{
			cin>>u>>r;
			bfs(u);
			if(find_path(u,r)==true) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
			memset(pre,0,sizeof(pre));
			memset(visited,0,sizeof(visited));
		}
	}
	return 0;
}

