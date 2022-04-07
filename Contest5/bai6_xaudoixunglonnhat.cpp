#include<bits/stdc++.h>
using namespace std;
int L[5005][5005];
int max(int n)
{
	int m = L[0][0];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(L[i][j]>m) m = L[i][j];
		}
	}
	return m;
}
int solution(string s)
{
	int n = s.length();
	int F[n+1][n+1];
	for(int i = 0; i<n; i++) F[i][i] = 1;
	
	for(int i = 0; i<n; i++)
	{
		for(int j = i+1; j<n; j++)
		{
			if(s[i]!=s[j]) F[i][j] = 0;
			else if(s[i]==s[j])
			{
				F[i][j] = F[i+1][j-1];
				L[i][j] = j-i+1;
			}
		}
	}
	return max(n);
}
int main()
{
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<solution(s)<<endl;
	}
	return 0;
}

