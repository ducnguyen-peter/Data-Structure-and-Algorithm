#include<bits/stdc++.h>
using namespace std;
bool solution(int a[], int n, int s)
{
	if(s==0) return true;
	if(n==0) return false;
	if(a[n-1] > s) return solution(a,n-1,s);
	return solution(a,n-1,s)||solution(a,n-1,s-a[n-1]);
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n,s;
		int a[40005];
		cin>>n>>s;
		for(int i = 1; i<=n; i++) cin>>a[i];
		if(solution(a,n,s)) cout<<"YES\n";
		else cout<<"NO\n"; 
	}
	return 0;
}

