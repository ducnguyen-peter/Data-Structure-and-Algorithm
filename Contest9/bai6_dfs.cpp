#include<bits/stdc++.h>
#include<stack>
#include<vector>
#include<map>
using namespace std;
int v, e, u;
vector<int> ke[10005];
int unvisited[10005];
void dfs(int u)
{
	stack<int> st;
	st.push(u);
	unvisited[u] = 0;
	cout<<u<<" ";
	while(!st.empty())
	{
		int s = st.top(); st.pop();
		for(int i = 0; i < ke[s].size(); i++)
		{
			if(unvisited[ke[s][i]])
			{
				cout<<ke[s][i]<<" ";
				unvisited[ke[s][i]] = 0;
				st.push(s);
				st.push(ke[s][i]);
				break;
			}
		}
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		cin>>v>>e>>u;
		int a,b;
		for(int i = 0; i < 10005; i++) ke[i].clear();
		for(int i = 0; i < e; i++)
		{
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		for(int i = 0; i<=10005; i++) unvisited[i] = 1;
		dfs(u);
		cout<<endl;
	}
	return 0;
}

