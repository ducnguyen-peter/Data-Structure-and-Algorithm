#include<bits/stdc++.h>
using namespace std;
int m, n;
int main()
{
	int t; cin>>t;
	while(t--){
		cin>>m>>n;
		int a[m][n];
		int f[m][n];
		for(int i = 0; i <= m; i++)
		{
			for(int j = 0; j <=n; j++)
			{
				a[i][j] = f[i][j] = 0;
			}
		}
		
		for(int i = 1; i <= m; i++)
		{
			for(int j = 1; j <= n; j++)
				cin>>a[i][j];
		}
		
		f[1][1] = 1;
		
		for(int i = 1; i <= m; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				if(i==1&&j==1) continue;
				f[i][j] = f[i-1][j] + f[i][j-1];
			}
		}
		cout<<f[m][n]<<endl;
	}
	return 0;
}

