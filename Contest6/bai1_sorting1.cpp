#include<bits/stdc++.h>
using namespace std;
int a[1000], n;
void solution(){
	int i = 0, j = n - 1;
	sort(a, a+n);
	while(i < j)
	{
		cout<<a[j]<<" "<<a[i]<<" ";
		i++; j--;
	}
	if(n%2==1) cout<<a[i];
}
int main()
{
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i = 0; i < n; i++) cin>>a[i];
		solution(); cout<<endl;
	}
	return 0;
}

