#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a, f[n+5][k];
		f[0][0] = 0;
		for(int i = 1; i<=k; i++)
		{
			f[0][i] = -1005;
		}
		for(int i = 1; i<=n; i++)
		{
			cin>>a; a%=k;
			for(int j = 0; j<=k; j++)
			{
				f[i][j] = max(f[i-1][j],f[i-1][(j+k-a)%k]+1);
			}
		}
		cout<<f[n][0]<<endl;
	}
	return 0;
}

