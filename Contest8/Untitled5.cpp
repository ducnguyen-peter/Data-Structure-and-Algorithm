#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include<map>
#include<set>
using namespace std;
typedef long long ll;

ll bfs(int s, int t)
{
	queue<pair<ll, ll> > q;
	q.push(make_pair(s,0));
	set<ll> set;
	set.insert(s);
	while(!q.empty())
	{
		pair<ll, ll> u = q.front(); q.pop();
		if(u.first==t) return u.second;
		if(u.first*2==t) return u.second+1;
		if(u.first-1==t) return u.second+1;
		if(set.find(u.first-1)==set.end())
		{
			q.push(make_pair(u.first-1, u.second+1));
			set.insert(u.first-1);
		}
		if(set.find(u.first*2)==set.end())
		{
			q.push(make_pair(u.first*2, u.second+1));
			set.insert(u.first*2);
		}
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll s,t; cin>>s>>t;
		cout<<bfs(s,t)<<endl;
	}
	return 0;
}

