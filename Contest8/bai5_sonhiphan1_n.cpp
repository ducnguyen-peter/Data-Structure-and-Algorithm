#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		char a[100005];
		for(int i = 1; i<=n; i++)
		{
			itoa(i,a,2);
			cout<<a<<" ";
		}
		cout<<endl;
	}
	return 0;
}

