#include<bits/stdc++.h>
#include<queue>
using namespace std;
void solution(long long n)
{
	queue<long long> q;
	q.push(1);
	while(n--)
	{
		long long s = q.front();
		q.push(s*10);
		q.push(s*10+1);
		cout<<s<<" ";
		q.pop();
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		solution(n);
		cout<<endl;
	}
	return 0;
}

