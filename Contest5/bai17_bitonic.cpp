#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		//khoi tao
		int n, k; cin>>n;
		int a[n];
		int f1[n], f2[n];
		for(int i = 1; i<=n; i++) 
		{
			cin>>a[i];
			f1[i] = a[i];
			f2[i] = a[i];
		}
		//tinh tong day tang dai nhat
		//tu 1 den n
		for(int i = 1; i<n; i++)
		{
			for(int j = 1; j<i; j++)
			{
				if(a[i]>a[j]) 
					f1[i] = max(f1[i],f1[j] + a[i]);
			}
		}
		//tu n den 1
		for(int i = n-1; i>=0; i--)
		{
			for(int j = n; j>i; j--)
			{
				if(a[i]>a[j]) f2[i] = max(f2[i],f2[j]+a[i]);
			}
		}
		int res = 0;
		for(int i = 1; i<=n; i++)
		{
			res = max(res, f1[i]+f2[i]-a[i]);
		}
		cout<<res<<endl;
	}
	return 0;
}

