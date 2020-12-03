#include<bits/stdc++.h>
#define M (10000000 + 9)
using namespace std;
typedef long long ll;
ll power(ll n, ll k)
{
	if(k==0) return 1;
	if(k==1) return n;
	ll x = power(n, k/2);
	if(k%2==0) return x*x%M;
	else return n*(x*x)%M;
}
int main()
{
	int t,n,k; cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<power(n,k)<<endl;
	}
	return 0;
}
