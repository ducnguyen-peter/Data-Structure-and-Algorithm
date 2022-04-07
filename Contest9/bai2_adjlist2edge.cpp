#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	cin.ignore();
	string s;
	vector<int>ke[100];
	for(int i = 1; i<=n;i++)
	{
		getline(cin,s);
		s+=" ";
		int j = 0;
		int so = 0;
		while(j<s.size())
		{
			if(s[j]>='0'&&s[j]<='9')
			{
				so=so*10+(s[j]-'0');
			}
			else if(so>0)
			{
				ke[i].push_back(so);
				so=0;
			}
			j++;
		}
	}
	for(int i = 1; i<n; i++)
	{
		sort(ke[i].begin(),ke[i].end());
	}
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < ke[i].size(); j++){
			if(i<ke[i][j]){
				cout<<i<<" "<<ke[i][j]<<endl;
			}
		}
	}
	return 0;
}

