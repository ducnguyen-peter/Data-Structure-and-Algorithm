#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include<map>
using namespace std;
int check[1005][1005];
int g[1000][1000];
int m,n;

void bfs()
{
	queue< pair<int, int> > q;
	q.push({1,1});
	check[1][1] = 0;
	while(!q.empty()){
		pair<int, int> s = q.front(); q.pop();
		if(check[s.first][s.second + g[s.first][s.second]]==-1)
		{
			check[s.first][s.second + g[s.first][s.second]] = check[s.first][s.second] + 1;
			q.push(make_pair(s.first, s.second + g[s.first][s.second]));
		}
		if(check[s.first + g[s.first][s.second]][s.second]==-1)
		{
			check[s.first + g[s.first][s.second]][s.second] = check[s.first][s.second] + 1;
			q.push(make_pair(s.first + g[s.first][s.second], s.second));
		}
		if(check[m][n]!=-1) return;
	}
}
void init(){
    memset(check,-1,sizeof(check));
}
int main()
{
	int t; cin>>t;
	while(t--){
		init();
		cin>>m>>n;
		for(int i = 1; i <=m; i++)
		{
			for(int j = 1; j<=n; j++)
			{
				cin>>g[i][j];
			}
		}
		bfs();
		cout<<check[m][n]<<endl;
	}
	return 0;
}

