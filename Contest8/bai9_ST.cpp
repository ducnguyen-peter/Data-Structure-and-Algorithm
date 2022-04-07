#include<bits/stdc++.h>
#include<set>
using namespace std;
typedef long long ll;
struct data{
	ll val;
	ll dem;
};
long long solution(int s, int t)
{
	if(t<=s) return s-t;
	else
	{
		if(t%2==0) return 1 + solution(s, t/2);
		else return 2 + solution(s, (t+1)/2);
	}
}
ll solution1(ll s, ll t)
{
	set<ll>s1;
	queue<data> q;
	s1.insert(s);
	q.push({s,0});
	while(q.size()>0)
	{
		data tmp = q.front(); q.pop();
		if(tmp.val==t) return tmp.dem;
		if(tmp.val*2==t) return tmp.dem+1;
		if(tmp.val-1==t) return tmp.dem+1;
		if(s1.find(tmp.val*2)==s1.end() && tmp.val!=t)
		{
			q.push({tmp.val*2, tmp.dem+1});
			s1.insert(tmp.val*2);
		}
		if(s1.find(tmp.val-1)==s1.end() && tmp.val-1>0)
		{
			q.push({tmp.val-1, tmp.dem+1});
			s1.insert(tmp.val-1);
		}
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		long long s,t; cin>>s>>t;
		cout<<solution(s,t)<<endl;
//		cout<<solution1(s,t)<<endl;
	}
	return 0;
}

