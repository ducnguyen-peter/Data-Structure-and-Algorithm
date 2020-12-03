#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		queue<int> q;
		string s;
		int a;
		while(n--)
		{
			cin>>s;
			if(s=="1") cout<<q.size()<<endl;
			else if(s=="2") 
			{
				if(q.empty()) cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
			}
			else if(s=="3")
			{
				cin>>a; q.push(a);
			}
			else if(s=="4") 
			{
				if(!q.empty()) q.pop();
				else continue;
			}
			else if(s=="5") 
			{
				if(!q.empty()) cout<<q.front()<<endl;
				else cout<<-1<<endl;
			}
			else if(s=="6") 
			{
				if(!q.empty()) cout<<q.back()<<endl;
				else cout<<-1<<endl;
			}
		}
	}
	return 0;
}

