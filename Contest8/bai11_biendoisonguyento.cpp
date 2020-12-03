#include<bits/stdc++.h>
using namespace std;
int uncheck[20005];
int d[20005] = {0};
int dem[20005];
vector<int> ke[20005];
vector<int> a;
queue<int> q;
void sang()
{
	for(int i = 2; i<=9999; i++)
	{
		if(d[i]==0)
			for(int j = i*i; j<=9999; j+=i)
				d[j]=1;
	}
	for(int i = 1000; i<=9999; i++)
		if(d[i]==0)
			a.push_back(i);
}
bool check(int x, int y)
{
	int d=0;
	while(x&&y)
	{
		if(x%10!=y%10) d++;
		x/=10; y/=10;
	}
	return d==1;
}
void khoitao()
{
	for(int i = 0; i<a.size()-1;i++)
	{
		for(int j = i + 1; j<a.size();j++)
		{
			if(check(a[i],a[j]))
			{
				ke[a[i]].push_back(a[j]);
				ke[a[j]].push_back(a[i]);
			}
		}
	}
}
int bfs(int u, int t)
{
	q.push(u);
	dem[u] = 0;
	uncheck[u] = 0;
	while(q.size()>0)
	{
		int s = q.front(); q.pop();
		if(s==t) return dem[t];
		for(int i = 0; i<ke[s].size(); i++)
		{
			int v = ke[s][i];
			if(uncheck[v]==0) continue;
			uncheck[v] = 0;
			dem[v] = dem[s]+1;
			q.push(v);
		}
	}
}
int main()
{
	int t;
	sang();
	khoitao();
	cin>>t;
	while(t--){
		int u, t;
		for(int i = 0; i<20005; i++)
		{
			uncheck[i] = 1;
			dem[i] = 0;
		}
		while(q.size()) q.pop();
		cin>>u>>t;
		cout<<bfs(u,t)<<endl;
	}
	return 0;
}

