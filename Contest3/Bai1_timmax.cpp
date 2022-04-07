#include<bits/stdc++.h>
#define MAX 1000000007
#define f(i,n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
void maxA_i(ll a[], int n)
{
	ll sum = 0;
	sort(a, a + n);
	f(i,n) 
	{
		sum += a[i]*i;
		sum%=MAX;
	}
	cout<<sum<<endl;
}
int main()
{
	int n;
	ll *a;
	int t; cin>>t;
	while(t--)
	{
		cin>>n; a=new ll[n];
		f(i,n) cin>>a[i];
		maxA_i(a,n);
		delete a;
	}
	return 0;
}

