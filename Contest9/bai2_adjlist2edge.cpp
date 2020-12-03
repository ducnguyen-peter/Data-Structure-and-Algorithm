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
	int d[100][100] = {0};
	for(int i = 1; i<=n; i++)
	{
		for(int j = 0; j<ke[i].size();j++)
		{
			if(!d[i][ke[i][j]] && !d[ke[i][j]][i])
				cout<<i<<" "<<ke[i][j]<<endl;
			d[i][ke[i][j]]=d[ke[i][j]][i]=1;
		}
	}
	return 0;
/*	vector< pair<int,int> > a(n);
	for(int i = 0; i<n; i++)
	{
		cin>>a[i].first>>a[i].second;
	}
	sort(a.begin(),a.end());
	for(int i = 0; i<n; i++)
	{
		cout<<a[i].first<<" "<<a[i].second<<endl;
	}*/
}

