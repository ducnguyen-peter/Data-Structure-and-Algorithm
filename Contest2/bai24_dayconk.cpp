#include<bits/stdc++.h>
#include<vector>
using namespace std;
int a[11], r[11], n, k;
vector< vector <int> > res;
void init()
{
	res.clear();
	cin>>n>>k;
	for(int i = 1; i<=n; i++) cin>>r[i];
	sort(r+1,r+n+1);
}
void solution(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		a[i] = j;
		if(i==n){
			int s = 0;
			for(int l = 1; l <= n; l++)
				if(a[l]) s+=r[l];
			if(s==k)
			{
				vector <int> x;
				for(int l = 1; l<=n; l++)
				{
					if(a[l]) x.push_back(r[l]);
				}
				res.push_back(x);
			}
		}
		else solution(i+1);
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		init();
		solution(1);
		if(res.size()==0) cout<<-1<<endl;
		else
		{
			sort(res.begin(),res.end());
			for(int i = 0; i < res.size();i++)
			{
				cout<<"[";
				for(int j = 0; j < res[i].size()-1; j++) cout<<res[i][j]<<" ";
				cout<<res[i][res[i].size()-1]<<"] ";
			}
			cout<<endl;
		}
	} 
	return 0;
}

