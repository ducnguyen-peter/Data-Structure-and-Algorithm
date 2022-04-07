#include<bits/stdc++.h>
#define mod (123456789)
using namespace std;
typedef long long ll;
ll solution(ll n)
{
	if(n==0) return 1;
	if(n==1) return 2%mod;
	ll x = solution(n/2);
	if(n%2==0) 
	{return x*x%mod;}
	else return 2*(x*x%mod)%mod;
}
int main()
{
	ll t, n; cin>>t;
	while(t--){
		cin>>n;
		cout<<solution(n-1)<<endl;
	}
	return 0;
}

