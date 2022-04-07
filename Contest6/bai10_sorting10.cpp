#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n, a; cin>>n;
		int d[10] = {0};
		for(int i = 0; i<n; i++) 
		{
			cin>>a;
			while(a)
			{
				d[a%10]++;
				a/=10;
			}
		}
		for(int i = 0; i<=9; i++)
			if(d[i]>0) cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}

