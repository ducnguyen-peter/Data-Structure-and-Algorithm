#include<bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i = 1; i<=n; i++)
int main()
{
	int t; cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int p[n][m], a[n][m];
		f(i,n)
			f(j,m) cin>>a[i][j];
		f(i,n)
		{
			f(j,m)
			{
				if(i==1&&j==1) p[i][j] = a[i][j];
				else if(i==1) p[i][j] = a[i][j] + p[i][j-1];
				else if(j==1) p[i][j] = a[i][j] + p[i-1][j];
				else p[i][j] = a[i][j] + min(p[i-1][j-1], min(p[i-1][j], p[i][j-1]));
			}
		}
		cout<<p[n][m]<<endl;
	}
	return 0;
}

