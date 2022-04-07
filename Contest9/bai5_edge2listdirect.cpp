#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int v,e; cin>>v>>e;
		int a, b;
		vector<int> canh[10005];
		vector<int> ke[10005];
		for(int i = 0; i<e; i++)
		{
			cin>>a>>b;
			ke[a].push_back(b);
		}
		for(int i = 1; i <= v; i++)
		{
			cout<<i<<": ";
			for(int j = 0; j < ke[i].size(); j++)
			{
				cout<<ke[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}

