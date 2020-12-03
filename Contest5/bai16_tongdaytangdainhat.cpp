#include<bits/stdc++.h>
using namespace std;
int solution(int a[], int n)
{
	int f[n+1];
	for(int i = 0; i<n; i++) f[i] = a[i];
	for(int i = 1; i<n; i++)
	{
		for(int j = 0; j<=i; j++)
		{
			if(a[j]<a[i]) f[i] += a[j];
		}
	}
	return *max_element(f, f+n);
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n+1];
		for(int i = 0; i<n; i++) cin>>a[i];
		cout<<solution(a,n)<<endl;
	}
	return 0;
}

