#include<bits/stdc++.h>
using namespace std;
stack<char> st;
string s;
bool check(string s)
{
	for(long long i = 0; i < s.size(); i++) {
		if(s[i]!=')') 
			st.push(s[i]);
		else if(!st.empty())
		{
			long long d = 0;
			while(st.top()!='(')
			{
				st.pop();
				d++;
			}
			st.pop();
			if(d<=1) return true;
		}
	}
	while(!st.empty()) st.pop();
	return false;
}
int main()
{
	long long t; cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,s);
		if(check(s)==false) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
	return 0;
}

