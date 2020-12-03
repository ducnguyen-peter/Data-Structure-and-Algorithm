#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(int n)
{
	ll val;
	priority_queue<ll, vector<ll>, greater<ll> > a;
	for(int i = 0; i<n; i++)
	{
		cin>>val;
		a.push(val);
	}
	ll res = 0;
	while(a.size()>1)
	{
		ll x = a.top(); a.pop();
		ll y = a.top(); a.pop();
		a.push(x+y);
		res += x+y;
	}
	cout<<res<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		solution(n);
	}
	return 0;
}

