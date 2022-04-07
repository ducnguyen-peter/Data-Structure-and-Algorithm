#include<bits/stdc++.h>
using namespace std;
long long f[101][50005];
int main()
{
	int t; cin>>t;
	for(int i = 0; i<=101; i++)
	{
		f[i][0] = 0;
	}
	for(int j = 0; j<=50005; j++) 
	{
		f[0][j] = 0;
	}
	for(int j = 1; j<=9; j++)
	{
		f[1][j] = 1;
	}
	for(int i = 1; i<=100; i++)
	{
		for(int so = 0; so<=9; so++)
		{
			for(int j = so; j<=50000; j++)
			{
				f[i][j] += f[i-1][j-so];
			}
		}
	}
	while(t--){
		int n, k;
		cin>>n>>k;
		cout<<f[n][k]<<endl;
	}
	return 0;
}

