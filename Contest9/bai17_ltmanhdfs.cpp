#include<bits/stdc++.h>
using namespace std;
int v, e;
vector<int>ke[10005];
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
		int a, b; cin>>a>>b;
		ke[a].push_back(b);
	}
	memset(visited,0,sizeof(visited));
	dem = 0;
}
int dfs(int u)
{
	visited[u] = 1;
	for(int i = 0; i < ke[u].size(); i++)
	{
		if(visited[ke[u][i]]==0)
		{
			dem++;
			dfs(ke[u][i]);
		}
	}
	return dem+1;
}
bool ltmanh()
{
	for(int i = 1; i <= v; i++)
	{
		if(dfs(i)<v) return false;
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
//		for(int i = 1; i <=v; i++)
//		{
//			cout<<dfs(i)<<" ";
//		}
	}
	return 0;
}

