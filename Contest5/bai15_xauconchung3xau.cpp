#include<bits/stdc++.h>
using namespace std;
int solution(string X, string Y, string Z, int m, int n, int o)
{
	int f[m+1][n+1][o+1];
	for(int i=0; i<=m; i++)
	{
		for(int j=0; j<=n; j++)
		{
			for(int k=0; k<=o;k++)
			{
				if(i==0 || j==0 || k==0) f[i][j][k] = 0;
				else if(X[i-1] == Y[j-1] && X[i-1] == Z[k-1]) f[i][j][k] = f[i-1][j-1][k-1] + 1;
				else f[i][j][k] = max(max(f[i-1][j][k], f[i][j-1][k]), f[i][j][k-1]);
			}
		}
	}
	return f[m][n][o];
}
int main()
{
	int t; cin>>t;
	while(t--){
		string X, Y, Z;
		int m,n,o;
		cin>>m>>n>>o;
		cin>>X>>Y>>Z;
		cout<<solution(X,Y,Z,m,n,o)<<endl;
	}
	return 0;
}

