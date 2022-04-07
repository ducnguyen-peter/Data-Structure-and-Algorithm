#include<bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i = 0; i < n; i++)
typedef long long ll;
ll F[93];
char FiboWord(int n, long long k)
{
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=F[n-2]) return FiboWord(n-2,k);
	return FiboWord(n-1,k-F[n-2]);
}
int main()
{
	int t,n,i; ll k;
	F[1] = 1; F[2] = 1;
	for(i = 3; i<93;i++) F[i] = F[i-2]+F[i-1];
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cout<<FiboWord(n,k)<<endl;
	}

	return 0;
}

