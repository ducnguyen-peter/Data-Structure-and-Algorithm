#include<bits/stdc++.h>
#include<vector>
using namespace std;
int v,e,m;
int mau[1005];
int danhdau;
vector<int> ke[10005];
int checkmau(int s, int i)
{
	for(int j = 0; j < ke[s].size(); j++)
	{
		if(mau[ke[s][j]]==i) return 0;
	}
	return 1;
}
void tomau(int s)
{
	if(danhdau==1) return;
	for(int i = 1; i <= m; i++)
	{
		if(checkmau(s,i)==1)
		{
			mau[s] = i;
			if(s==v) danhdau = 1;
			else tomau(s+1);
		}
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		cin>>v>>e>>m;
		for(int i = 0; i <= v; i++)
		{
			ke[i].clear();
		}
//		ke.resize(1005);
		for(int i = 0; i < e; i++)
		{
			int a, b; cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		memset(mau,0,sizeof(mau));
		danhdau = 0;
		tomau(1);
		if(danhdau==1) cout<<"YES";
		else cout<<"NO";
	}
	return 0;
}

