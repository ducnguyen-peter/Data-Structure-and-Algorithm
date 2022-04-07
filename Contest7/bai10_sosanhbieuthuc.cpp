#include<bits/stdc++.h>
using namespace std;
void pha_ngoac(string &s)
{
	vector<char> res;
	for(int i = 0; i<s.size(); i++)
	{
		if(s[i]!=')') res.push_back(s[i]);
		else
		{
			int j = res.size()-1;
			while(res[j]!='(' && j>=0) j--;
			res.erase(res.begin()+j);
			if(res[j-1]=='-')
			{
				while(j<res.size())
				{
					if(res[j]=='+') res[j]='-';
					else if(res[j]=='-') res[j]='+';
					j++;
				}
			}
		}
	}
	s.clear();
	for(int i = 0; i<res.size(); i++) s.push_back(res[i]);
	//cout<<s<<endl;
}
int main()
{
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s1, s2;
		cin>>s1>>s2;
		pha_ngoac(s1); pha_ngoac(s2);
//		cout<<s1<<" "<<s2<<endl;
		if(s1==s2) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}

