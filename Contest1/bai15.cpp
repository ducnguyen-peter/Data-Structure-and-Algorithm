#include<bits/stdc++.h>
using namespace std;
void sol(string&a)
{
	long long i;
	for(i = a.size()-1; i>=0; i--)
	{
		if(a[i]>a[i-1]) break;
	}
	if(i>0)
	{
		for(long long j = a.size()-1; j>=0; j--)
		{
			if(a[j]>a[i-1])
			{
				swap(a[i-1],a[j]);
				break;
			}
		}
		sort(a.begin()+i, a.end());
	}
	else a = "BIGGEST";
}
int main()
{
	int t; cin>>t;
	while(t--){
/*		int a[1000],n,k;
		cin>>n;
		OK = 1;
		init(a,n);
		while(OK)
		{
			result(a,n);*/
		long long n; string a;
		cin>>n>>a;
		sol(a);
		cout<<n<<" "<<a<<endl;
//		}
//		cout<<endl;
	}
	return 0;
}

