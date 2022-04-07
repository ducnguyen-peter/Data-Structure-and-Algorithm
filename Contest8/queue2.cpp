#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q; cin>>q;
	string s;
	int a;
	queue<int> qu;
	while(q--){
		cin>>s;
		if(s=="PUSH")
		{
			cin>>a;
			qu.push(a);
		}
		else if(s=="POP")
		{
			if(!qu.empty()) qu.pop();
			else continue;
		}
		else if(s=="PRINTFRONT")
		{
			if(!qu.empty()) cout<<qu.front()<<endl;
			else cout<<"NONE"<<endl;
		}
	}
	return 0;
}

