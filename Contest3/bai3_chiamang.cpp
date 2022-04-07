#include<bits/stdc++.h>
#define f(i,n) for(int i = 0; i < n; i++)
using namespace std;
int chiamang(int a[], int n, int k)
{
	sort(a, a + n);
	int sum = 0, sum1 = 0;
	f(l,n) sum += a[l];
	if(k <= n/2) f(i,k) sum1 += a[i];
	else if(k > n/2) f(j, n - k) sum1 += a[j];
	return sum - 2*sum1;
}
int main()
{
	int t; cin>>t;
	int n, a[50], k;
	while(t--)
	{
		cin>>n>>k; f(i,n) cin>>a[i];
		cout<<chiamang(a,n,k)<<endl;
	}
	return 0;
}

