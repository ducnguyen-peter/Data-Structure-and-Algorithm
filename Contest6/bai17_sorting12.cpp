#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t; cin>>t;
	while(t--){
		ll n, m; cin>>n>>m;
		ll a[n], b[m];
		for(ll i = 0; i<n; i++) cin>>a[i];
		for(ll i = 0; i<m; i++) cin>>b[i];
		sort(a, a+n);
		sort(b, b+n);
		cout<<a[n-1]*b[0]<<endl;
	}
	return 0;
}

