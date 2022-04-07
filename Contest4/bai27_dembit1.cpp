#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>a;
void center(ll n)
{
	int t = 0;
	ll mu = 1;
	while(n/2>0)
	{
		t++;
		if(t==1)
		{
			a.push_back(2);
			mu=2;
		}
		else
		{
			mu*=2;
			a.push_back(mu);
		}
		n/=2;
	}
}
ll val(ll i, ll n, ll pos)
{
	if(i%2==1) return 1;
	if(i<a[pos])
		val(i,n/2,pos-1);
	else if(i==a[pos]) return n%2;
	else if(i>a[pos]) val(2*a[pos]-i, n/2, pos - 1);
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n, l, r, res = 0;
		a.clear();
		cin>>n>>l>>r;
		center(n);
		for(ll i = l; i <=r; i++)
		{
			res+=val(i,n,a.size()-1);
		}
		cout<<res<<endl;
	}
	return 0;
}

