#include<bits/stdc++.h>
using namespace std;
int n, k, OK;
void init(int a[]) {
	for(int i = 1; i<=n; i++)
	{
		a[i] = 0;
	}
//	for(int j = 1; j<=k; j++) a[j] = 1;
}
void result(int a[]) {
	for(int i = 1; i<=n; i++ ) cout<<a[i];
	cout<<" ";
}
int dem(int a[]) {
	int d = 0;
	for(int i = 1; i<=n; i++) if(a[i] == 1) d++;
	return d;
}
void sinh(int a[]) {
	int i = n;
	while( i>=1 && a[i]==1) //000
	{
		a[i] = 0;
		i--;
	}
	if(i >= 1) a[i] = 1;
	if(i < 1) OK = 0;
	if(dem(a)==k) result(a);
}
int main()
{
	int t; cin>>t;
	while(t--){
		OK = 1;
		cin>>n>>k;
		int a[17];
		init(a);
		while(OK)
		{
			sinh(a);
		}
		cout<<endl;
	}
	return 0;
}

