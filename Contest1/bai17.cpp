#include<bits/stdc++.h>
using namespace std;
long long sol(long long n)
{
	queue<long long> q;
	q.push(9);
	while(!q.empty())
	{
		long long s = q.front(); q.pop();
		if(s%n==0) return s;
		q.push(s*10);
		q.push(s*10+9);
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		cout<<sol(n)<<endl;
	}
	return 0;
}

