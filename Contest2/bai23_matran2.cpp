#include<bits/stdc++.h>
using namespace std;
int a[100][100], n, i, j;
vector <string> res;
int checked[100][100];
void init()
{
	cin>>n;
	for(int i = 1; i<=n; i++)
	{
		for(int j = 1; j<=n; j++)
		{
			cin>>a[i][j];
			checked[i][j] = 0;
		}
	}
	res.clear();
}
void Try(int i, int j, string s)
{
	if(a[1][1]==0 || a[n][n]==0)
	{
		return;
	}
	if(i==n&&j==n&&a[n][n])
	{
		res.push_back(s);
		return;
	}
	if(i<n && a[i+1][j] && !checked[i+1][j])
	{
		checked[i][j] = 1;
		Try(i+1,j,s+"D");
		checked[i][j] = 0;
	}
	if(j<n && a[i][j+1] && !checked[i][j+1])
	{
		checked[i][j] = 1;
		Try(i,j+1,s+"R");
		checked[i][j] = 0;
	}
	if(j>1 && a[i][j-1] && !checked[i][j-1])
	{
		checked[i][j] = 1;
		Try(i,j-1,s+"L");
		checked[i][j] = 0;
	}
	if(i>1 && a[i-1][j] && !checked[i-1][j])
	{
		checked[i][j] = 1;
		Try(i-1,j,s+"U");
		checked[i][j] = 0;
	}
	if(i<n && j<n && !a[i+1][j] && !a[i][j+1] || i>n || j>n)
	{
		return;
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		init();
		Try(1,1,"");
		if(res.size()==0) cout<<-1;
		else{
			sort(res.begin(),res.end());
			for(int i = 0; i < res.size(); i++)
				cout<<res[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

