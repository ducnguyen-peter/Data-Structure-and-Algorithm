#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<vector>
#include<map>
using namespace std;
int v, e, u, r;
vector<int> ke[10005];
int unvisited[10005];
int pre[10005];
void init()
{
	cin>>v>>e>>u>>r;
	for(int i = 0; i < 10005; i++) 
	{
		ke[i].clear();
		unvisited[i] = 1;
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
void dfs(int u)
{
	stack<int> st;
	st.push(u);
	unvisited[u] = 0;
//	cout<<u<<" ";
	while(!st.empty())
	{
		int s = st.top(); st.pop();
		for(int i = 0; i < ke[s].size(); i++)
		{
			if(unvisited[ke[s][i]])
			{
				int t = ke[s][i];
//				cout<<t<<" ";
				unvisited[t] = 0;
				st.push(s);
				st.push(t);
				pre[t] = s;
				break;
			}
		}
	}
}
void find_path(int s, int t)
{
	vector<int> path;
	if(pre[t]==0) cout<<-1<<endl;
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
	for(int i = 0; i < path.size(); i++) cout<<path[i]<<" ";
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		init();
		dfs(u);
		cout<<endl;
		find_path(u,r);
	}
	return 0;
}

