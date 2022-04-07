#include<bits/stdc++.h>
#define faster() ios::sync_with_stdio; cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
	faster();
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool ok = true;
		stack<char> stack;
		for(int i = 0; i<s.size();i++)
		{
			if(s[i]=='('||s[i]=='['||s[i]=='{')
			{
				stack.push(s[i]);
			}
			if(s[i]==')')
			{
				if(stack.size()==0) 
				{
					ok = false;
					break;
				}
				else if(stack.top()=='(') stack.pop();
			}
			if(s[i]==']')
			{
				if(stack.size()==0) 
				{
					ok = false;
					break;
				}
				else if(stack.top()=='[') stack.pop();
			}
			if(s[i]=='}')
			{
				if(stack.size()==0) 
				{
					ok = false;
					break;
				}
				else if(stack.top()=='{') stack.pop();
			}
		}
		if(stack.size()>0) ok = false;
		if(ok==true) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}

