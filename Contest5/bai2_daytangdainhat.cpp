#include<bits/stdc++.h>
using namespace std;
int L[1000];
int daytangdainhat(int a[], int n)
{
	L[0] = 1;
	for(int i = 1; i<=n; i++)
	{
		L[i] = 0;
		for(int j = 0; j < i; j++)
		{
			if(a[j]<a[i] && L[i]<L[j] + 1)
			{
				L[i] = 1+L[j];
			}
		}
	}
	return *max_element(L,L+n);
}
int main()
{
	int t; cin>>t;
	while(t--){
		int a[1000], n;
		cin>>n;
		for(int i = 0; i<n; i++)
		{
			cin>>a[i];
		}
		cout<<daytangdainhat(a,n)<<endl;
	}
	return 0;
}

