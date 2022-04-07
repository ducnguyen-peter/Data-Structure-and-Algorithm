#include<bits/stdc++.h>
#include<queue>
#include<set>
using namespace std;
typedef long long ll;
struct data{
	ll val;
	ll dem;
};
ll bfs(ll a) {
	set<ll> s;
	queue<data> q;
	s.insert(a);
	q.push({a,0});
	while(!q.empty()) {
		data tmp = q.front(); q.pop();
		if(tmp.val == 1) return tmp.dem;
		if(tmp.val - 1 == 1) return tmp.dem + 1;
		if(s.find(tmp.val-1) == s.end() && tmp.val - 1>0)
		{
			q.push({tmp.val - 1, tmp.dem + 1});
			s.insert(tmp.val - 1);
		}
		for(int i = 2; i * i <= tmp.val; i++){
			if(tmp.val%i==0){
				if(s.find((tmp.val/i)) == s.end()){
					q.push({tmp.val/i, tmp.dem+1});
					s.insert(tmp.val/i);
				}
			}
		}
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll u; cin>>u;
		cout<<bfs(u)<<endl;
	}
	return 0;
}

