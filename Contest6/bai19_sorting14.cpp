#include<bits/stdc++.h>
using namespace std;
void insert(int a[],int n, int x, int vt)
{
	a[vt] = x;
	n++;
	for(int i = n-1; i>vt; i--)
	{
		a[i] = a[i-1];
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n], d[1000]={0};
		for(int i = 0; i<n; i++) 
		{
			cin>>a[i];
			d[a[i]] = 1;
		}
		sort(a, a+n);
		int l = a[0], r = a[n-1];
		int dem = 0;
		for(int i = l; i<r; i++)
		{
			if(d[i]==0) dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}

