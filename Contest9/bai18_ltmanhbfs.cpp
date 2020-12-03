#include<bits/stdc++.h>
using namespace std;
int v, e;
vector<int> ke[10005];
int visited[10005];
int dem;
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
	}
	memset(visited,0,sizeof(visited));
	dem = 0;
}
int bfs(int u)
{
	queue<int> q;
	q.push(u);
	visited[u] = 1;
	dem++;
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
				dem++;
			}
		}
	}
	return dem;
}
bool ltmanh()
{
	for(int i = 1; i <= v; i++)
	{
		if(bfs(i)<v) return false;
	}
	return true;
}
int main()
{
	int t; cin>>t;
	while(t--){
		init();
		if(ltmanh()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

