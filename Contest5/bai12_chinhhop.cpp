#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		int res = 1;
		if(k>n) res=0;
		else
			for(int i = n-k+1; i<=n; i++)
			{
				res = (res*i)%1000000007;
			}
		res%=1000000007;
		cout<<res<<endl;
	}
	return 0;
}

