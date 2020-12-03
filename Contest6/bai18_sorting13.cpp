#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t; cin>>t;
	while(t--){
		ll n,m; cin>>n>>m;
		ll a[n+m], b[m];
		for(int i = 0; i<n; i++) cin>>a[i];
		for(int i = 0; i<m; i++) 
		{
			cin>>b[i];
			a[i+n] = b[i];
		}
		sort(a, a+n+m);
		for(int i = 0; i<m+n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}

