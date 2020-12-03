#include<bits/stdc++.h>
using namespace std;
int priority(char x)
{
	if(x=='(') return 1;
	if(x=='*'||x=='/') return 2;
	if(x=='+'||x=='-') return 3;
	return 4;
}
void mid2last(string s, stack<char> a)
{
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i]>='A'&& s[i]<='Z') cout<<s[i];
		else
		{
			if(s[i]=='(') a.push(s[i]);
			else
			{
				if(s[i]==')'){
					while(!a.empty() && a.top()!='(')
					{
						cout<<a.top();
						a.pop();
					}
					a.pop();
				}
				else
				{
					if(!a.empty())
					while(priority(s[i])<=priority(a.top())&& a.empty())
					{
						cout<<a.top();
						a.pop();
						if(a.empty()) break;
					}
					a.push(s[i]);
				}
			}
		}
	}
	while(!a.empty())
	{
		if(a.top()!='(')
		cout<<a.top(); a.pop();
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		stack<string> st;
		for(int i = s.size()-1; i >=0; i--)
		{
			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
			{
				string tmp1 = st.top(); st.pop();
				string tmp2 = st.top(); st.pop();
				string temp = '(' + tmp1 + s[i] + tmp2 + ')';
				st.push(temp);
			}
			else st.push(string(1, s[i]));
		}
		string res = st.top();
		stack<char> a;
		mid2last(res, a);
		cout<<endl;
	}
	return 0;
}

