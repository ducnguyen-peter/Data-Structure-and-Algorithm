#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
int v,e;
vector<int>ke[10005];
int visited[10005];// pre[10005];
void reinit()
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
//		ke[b].push_back(a);
	}
//	memset(pre,0,sizeof(pre));
	memset(visited,0,sizeof(visited));
}
int dfs(int u)
{
	stack<int>st;
	st.push(u);
	visited[u] = 1;
//	pre[u] = 0;
	while(!st.empty())
	{
		int s = st.top(); st.pop();
		for(int i = 0; i < ke[s].size(); i++)
		{
			int t = ke[s][i];
			if(!visited[t])
			{
				st.push(s);
				st.push(t);
				visited[t] = 1;
//				pre[t] = s;
				break;
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
//		memset(pre,0,sizeof(pre));
		if(dfs(i)) return 1;
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

