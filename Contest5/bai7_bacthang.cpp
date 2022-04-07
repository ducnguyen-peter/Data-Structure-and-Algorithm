#include<bits/stdc++.h>
using namespace std;
void solution(int n, int k)
{
	int F[n+5]={0};
	F[0] = 1; F[1] = 1;
	for(int i = 2; i <= n; i++) 
	{
		for(int j = 1; j<=min(i,k); j++)
		{
			F[i] += F[i-j];
			F[i]%=1000000007;
		}
	}
	cout<<F[n]<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		solution(n,k);
	}
	return 0;
}

