#include<bits/stdc++.h>
using namespace std;
int main()
{
//	int t; cin>>t;
//	while(t--){
		int n; cin>>n;
		int matrix[n][n] = {0};
		int tmp;
		for(int i = 1; i<=n; i++)
		{
			for(int j = 1; j<n; j++)
			{
				cin>>tmp;
				matrix[i][tmp] = 1;
			}
		}
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1 ; j<=n; j++)
			{
				if(matrix[i][j]==1) cout<<1<<" ";
				else cout<<0<<" ";
			}
			if(i<n) cout<<endl;
		}
//	}
	return 0;
}

