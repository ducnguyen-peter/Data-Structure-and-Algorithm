#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
	int duyet[9];
	for(int i = 0; i<=9; i++)
	{
		duyet[i] = 0;
	}
	int tmp;
	while(n>0)
	{
		tmp = n%10;
		duyet[tmp]++;
		n/=10;
	}
	for(int i = 0; i<=5; i++)
	{
		if(duyet[i]>=2) return false;
	}
	for(int i = 6; i<=9; i++)
	{
		if(duyet[i]>0) return false;
	}
	return true;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int l, r; cin>>l>>r;
		int dem = 0;
		for(int i = l; i<=r; i++)
		{
			if(check(i)) dem++;
		}
		cout<<dem<<endl;
//		int l; cin>>l;
//		cout<<check(l)<<endl;
	}
	return 0;
}

