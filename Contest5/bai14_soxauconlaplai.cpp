#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n; cin>>t;
	while(t--){
		cin>>n;
		string s; cin>>s;
		int f[101][101] = {0};
		for(int i = 1; i<=n; i++)
		{
			for(int j = 1; j<=n; j++)
			{
				if(s[i-1]==s[j-1] && i!=j)
				{
					f[i][j] = f[i-1][j-1] + 1;
				}
				else
				{
					f[i][j] = max(f[i-1][j],f[i][j-1]);
				}
			}
		}
		cout<<f[n][n]<<endl;
		}
	return 0;
}

