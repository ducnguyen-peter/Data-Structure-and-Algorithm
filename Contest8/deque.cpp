#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
	int t; cin>>t;
	deque<int> d;
	string s;
	int a;
	while(t--){
		cin>>s;
		if(s=="PUSHFRONT")
		{
			cin>>a;
			d.push_front(a);
		}
		else if(s=="PRINTFRONT")
		{
			if(!d.empty()) cout<<d.front()<<endl;
			else cout<<"NONE"<<endl;
		}
		else if(s=="POPFRONT")
		{
			if(!d.empty()) d.pop_front();
		}
		else if(s=="PUSHBACK")
		{
			cin>>a;
			d.push_back(a);
		}
		else if(s=="PRINTBACK")
		{
			if(!d.empty()) cout<<d.back()<<endl;
			else cout<<"NONE"<<endl;
		}
		else 
		{
			if(!d.empty()) d.pop_back();
		}
	}
	return 0;
}

