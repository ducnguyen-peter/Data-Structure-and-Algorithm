#include<bits/stdc++.h>
using namespace std;
int count(int a[], int n, int k)
{
	int dem = 0;
	for(int i = 1; i<=n; i++)
	{
		for(int j = i+1; j<=n; j++)
		{
			if(a[i]+a[j]==k) dem++;
		}
	}
	return dem;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		int a[n], d[n]={0};
		for(int i = 1; i<=n; i++)
		{
			cin>>a[i];
		}
		int dem = 0;
		for(int i = 1; i<=n; i++)
		{
			for(int j = i+1; j<=n; j++)
			{
				if(a[i]+a[j]==k) dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}

