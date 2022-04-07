#include<bits/stdc++.h>
#define f(i, n) for(int i = 0; i < n; i++)
using namespace std;
int tongnhonhat(int a[], int n)
{
	sort(a, a + n);
	int num1 = 0, num2 = 0;
	f(i, n)
	{
		if(i%2==0) num1 = num1*10 + a[i];
		else num2 = num2*10 + a[i];
	}
	return num1 + num2;
}
int main()
{
	int n, a[21], k;
	int t; cin>>t;
	while(t--)
	{
		cin>>n; f(i,n) cin>>a[i];
		cout<<tongnhonhat(a,n)<<endl;
	}

	return 0;
}

