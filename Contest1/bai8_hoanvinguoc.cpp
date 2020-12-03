#include<bits/stdc++.h>
using namespace std;
int n, a[11], dung;
void init()
{
	for(int i = 1; i <= n; i++) a[i] = n-i+1;
}
void result()
{
	for(int i = 1; i <= n; i++) cout<<a[i];
	cout<<" ";
}
void solution()
{
	int i = n-1;
	while(i>0 && a[i+1] > a[i]) i--;
	if(i==0) dung = 1;
	int k = n;
	while(a[k] > a[i]) k--;
	swap(a[i], a[k]);
	int l = i + 1, r = n;
	while(l < r)
	{
		swap(a[l],a[r]); l++; r--;
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		cin>>n;
		init();
		dung = 0;
		while(dung == 0)
		{
			result();
			solution();
		}
		cout<<endl;
	}
	return 0;
}

