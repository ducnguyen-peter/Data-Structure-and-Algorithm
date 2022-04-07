#include<bits/stdc++.h>
#define f(i,n) for(int i = 0; i < n; i++)
using namespace std;
bool sapxepthamlam(int a[], int n)
{
	int b[n];
	copy(a, a + n, b);
	sort(b, b + n);
	f(j,n) if(!(a[j]==b[n - 1 - j]) && !(a[j] == b[j])) return false;
	return true;
}
int main()
{
	int t, n, a[50];
	cin>>t;
	while(t--)
	{
		cin>>n;
		f(i,n) cin>>a[i];
		if(sapxepthamlam(a,n)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}

