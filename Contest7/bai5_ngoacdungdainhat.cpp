#include<bits/stdc++.h>
using namespace std;
long long count(string s)
{
	stack<long long> st;
	st.push(-1);
	long long res = 0;
	for(int i = 0; i<s.size();i++)
	{
		if(s[i]=='(') st.push(i);
		else
		{
			st.pop();
			if(st.size()>0) res = max(res, i-st.top());
			if(st.size()==0) st.push(i);
		}
	}
	return res;
}
int main()
{
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		cout<<count(s)<<endl;		
	}
	return 0;
}

