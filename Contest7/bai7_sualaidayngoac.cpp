#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(string s)
{
	stack<char>a;
	int dem = 0;
	for(int i = 0; i<s.size();i++)
	{
		if(s[i]=='(') a.push(s[i]);
		else 
		{
			if(a.empty())
			{
				a.push('(');
				dem++;
			}
			else if(a.top()=='(') a.pop();
		}
	}
	return dem+a.size()/2;
}
int main()
{
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		cout<<check(s)<<endl;
	}
	return 0;
}

