#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t; cin>>t;
	queue<int> q;
	while(t--){
		int n; cin>>n;
		int ok = 1;
		queue<long long> q;
/*		char a[100000];
		for(long long i = 1; i<=1000000007; i++)
		{
			ll b;
			lltoa(i,a,2);
			for(int j = 0; a[j] != '\0'; j++)
			{
				if(a[j]=='1') a[j]='9';
			}
			b = atoll(a);
			if(b%n==0)
			{
				cout<<b; break;
			}
		}
		cout<<endl;*/
		while(ok)
		{
			q.push(9);
			long long so = q.front();
			q.pop();
			if(so%n==0)
			{
				cout<<so<<endl;
				ok = 0;
			}
			q.push(so*10);
			q.push(so*10+9);
		}
	}
	return 0;
}

