#include<bits/stdc++.h>
using namespace std;
int v,e,u;
int visited[10005];
vector<int> ke[10005];
vector<pair<int,int> > tree;
void init()
{
	cin>>v>>e>>u;
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
	tree.clear();
}
void treedfs(int s)
{
	visited[s] = 1;
	if(tree.size()==v-1) return;
	for(int i = 0; i < ke[s].size(); i++)
	{
		int t = ke[s][i];
		if(!visited[t])
		{
			tree.push_back({s,t});
			treedfs(t);
		}
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		init();
		treedfs(u);
		if(tree.size()==v-1)
		for(int i = 0; i < tree.size(); i++)
		{
			cout<<tree[i].first<<" "<<tree[i].second<<endl;
		}
		else cout<<-1<<endl;
	}
	return 0;
}

