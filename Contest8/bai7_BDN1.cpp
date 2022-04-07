#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		long long dem = 0;
		int ok = 1;
		queue<long long> q;
/*		char a[100005];
		for(long long i = 1; i<=100000; i++)
		{
			lltoa(i,a,2);
			long long b = atoll(a);
			if(b<=n) dem++;
		}*/
		q.push(1);
		while(ok)
		{
			long long temp = q.front();
			q.pop();
			if(temp<=n) dem++;
			else ok = 0;
			q.push(temp*10);
			q.push(temp*10+1);
		}
		cout<<dem<<endl;
	}
	return 0;
}

