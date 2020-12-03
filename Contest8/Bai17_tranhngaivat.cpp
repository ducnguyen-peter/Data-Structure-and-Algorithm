#include<bits/stdc++.h>
#include<queue>
#include<map>
#include<set>
#include<vector>
using namespace std;
int n;
char g[100][100];
pair<int, int> a;
pair<int, int> b;
int bfs()
{
	queue< pair< pair<int,int>, int> > q;
	set<pair<int, int> > set;
	q.push(make_pair(a, 0));
	set.insert(a);
	while(!q.empty())
	{
		pair<pair<int, int>, int> s = q.front(); q.pop();
		if(s.first==b) return s.second;
		for(int u = s.first.first - 1; u>=0; u--)
		{
			if(g[u][s.first.second]=='X') break;
			if(set.find(make_pair(u,s.first.second))==set.end())
			{
				q.push(make_pair(make_pair(u, s.first.second), s.second+1));
				set.insert(make_pair(u, s.first.second));
			}
		}
		for(int u = s.first.first + 1; u<n; u++)
		{
			if(g[u][s.first.second]=='X') break;
			if(set.find(make_pair(u, s.first.second))==set.end())
			{
				q.push(make_pair(make_pair(u, s.first.second), s.second+1));
				set.insert(make_pair(u, s.first.second));
			}
		}
		for(int v = s.first.second - 1; v>=0; v--)
		{
			if(g[s.first.first][v]=='X') break;
			if(set.find(make_pair(s.first.first, v))== set.end())
			{
				q.push(make_pair(make_pair(s.first.first, v), s.second + 1));
				set.insert(make_pair(s.first.first, v));
			}
		}
		for(int v = s.first.second + 1; v<n; v++)
		{
			if(g[s.first.first][v]=='X') break;
			if(set.find(make_pair(s.first.first, v))== set.end())
			{
				q.push(make_pair(make_pair(s.first.first, v), s.second + 1));
				set.insert(make_pair(s.first.first, v));
			}
		}
	}
}
int main()
{
//	int t; cin>>t;
//	while(t--){
		cin>>n;
		for(int i = 0; i<n; i++)
			for(int j = 0; j<n; j++)
				cin>>g[i][j];
		cin>>a.first>>a.second>>b.first>>b.second;
		cout<<bfs()<<endl;
//	}
	return 0;
}

