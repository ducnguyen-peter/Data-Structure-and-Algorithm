#include<bits/stdc++.h>
using namespace std;
int res[1000][1000];
int LCS(string a, string b)
{
	res[0][0] = 0;
	for(int i = 1; i<=a.length(); i++)
	{
		for(int j = 1; j<=b.length(); j++)
		{
			if(a[i-1] == b[j-1])
			{
				res[i][j] = 1 + res[i-1][j-1];
			}
			else
			{
				res[i][j] = max(res[i][j-1], res[i-1][j]);
			}
		}
	}
	return res[a.length()][b.length()];
}
int main()
{
	string a, b;
	cin>>a>>b;	
	cout<<LCS(a,b);
	return 0;
}

