#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		int a[n][m];
		int f[n][m];
		for(int i = 1; i<=n; i++)
		{
			for(int j = 1; j<=m; j++)
			{
				cin>>a[i][j];
				f[i][j] = a[i][j];
			}
		}
		int result=0;
		for(int i = 1; i<=n; i++)
		{
			for(int j = 1; j<=m; j++)
			{
				if(a[i][j]==0) continue;
				if(a[i][j] && a[i-1][j] && a[i][j-1] && a[i-1][j-1])
				{
					f[i][j] = min(f[i-1][j],min(f[i][j-1],f[i-1][j-1])) + 1;
				}
				result = max(result, f[i][j]);
			}
		}
		cout<<result<<endl;
	}
	return 0;
}

