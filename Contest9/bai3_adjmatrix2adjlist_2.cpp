#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
//	int t; cin>>t;
//	while(t--){
		vector<vector<int> > adj;
		vector<int> ke[10005];
		int n; cin>>n;
		for(int i = 1; i <= n; i++)
		{
			vector<int> temp;
			temp.clear();
			for(int j = 1; j <= n; j++)
			{
				int tmp;
				cin>>tmp;
				temp.push_back(tmp);
				if(tmp==1) ke[i].push_back(j);
			}
			adj.push_back(temp);
		}
/*		for(int i = 0; i<n; i++)
		{
			for(int j = 0; j<n; j++)
			{
				if(adj[i][j])
				{
					ke[i].push_back(j+1);
				}
			}
		}*/
		for(int i = 1; i <= n; i++)
		{
			for(int j = 0; j < ke[i].size(); j++)
			{
				cout<<ke[i][j]<<" ";
			}
			cout<<endl;
		}
//	}
	return 0;
}

