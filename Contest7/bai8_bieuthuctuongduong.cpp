#include<bits/stdc++.h>
using namespace std;
void solution(string s)
{
	vector<char> res;
	for(int i = 0; i<s.size(); i++)
	{
		if(s[i]!=')') res.push_back(s[i]);
		else
		{
			int j = res.size() - 1;
			while(res[j]!='(' && j>=0) j--;
			res.erase(res.begin()+j);
			if(res[j-1]=='-')
			{
				while(j<res.size())
				{
					if(res[j]=='-') res[j] = '+';
					else if(res[j]=='+') res[j] = '-';
					j++;
				}
			}
		}
	}
	for(int i = 0; i<res.size(); i++) cout<<res[i];
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		solution(s);
	}
	return 0;
}

