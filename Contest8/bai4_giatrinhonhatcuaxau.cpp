#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		long long k; cin>>k;
		string s; cin>>s;
		priority_queue<long long>q;
		long long d[300] = {0};
		for(int i = 0; i<s.size();i++)
			d[s[i]-'A']++;
		for(int i = 0; i<27; i++)
			if(d[i]) q.push(d[i]);
		if(k)
		while(k--)
		{
			long long l = q.top();
			if(q.top()==0) break;
			q.pop();
			l--;
			q.push(l);
		}
		long long res = 0;
		while(!q.empty())
		{
			res+=(q.top()*q.top());
			q.pop();
		}
		cout<<res<<endl;
	}
	return 0;
}

