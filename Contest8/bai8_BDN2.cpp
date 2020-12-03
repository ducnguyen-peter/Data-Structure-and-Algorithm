#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		queue<long long> q;
		int ok = 1;
		q.push(1);
		while(ok)
		{
			long long so = q.front();
			q.pop();
			if(so%n==0 && so/n>1)
			{
				cout<<so<<endl;
				ok = 0;
			}
			q.push(so*10);
			q.push(so*10+1);
		}
	}
	return 0;
}

