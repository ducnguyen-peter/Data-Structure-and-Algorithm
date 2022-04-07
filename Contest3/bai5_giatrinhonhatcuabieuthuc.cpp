#include<bits/stdc++.h>
#define f(i,n) for(int i = 0; i < n; i++)
using namespace std;
int minbieuthuc(int a[],int b[], int n)
{
	sort(a, a + n, greater<int>());
	sort(b,b + n);
	int result = 0;
	f(i,n) result += a[i]*b[i];	
	return result;
}
int main()
{
	int t, n, *a,*b; cin>>t;
	while(t--)
	{
		cin>>n; a = new int[n];
		b = new int[n];
		f(i,n) cin>>a[i];
		f(i,n) cin>>b[i];
		cout<<minbieuthuc(a,b,n);
		cout<<endl;
		delete a;
	}

	return 0;
}

