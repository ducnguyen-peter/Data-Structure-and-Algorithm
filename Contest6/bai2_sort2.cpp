#include<bits/stdc++.h>
using namespace std;
void sortabs(int a[], int n, int k) //sub sai
{
	for(int i = 1; i<=n; i++)
	{
		for(int j = i+1; j<=n; j++)
		{
			if(abs(k-a[j])<abs(k-a[i])) swap(a[i],a[j]);
		}
	}
}
struct dta{
	int val1, val2, i;
};
bool compare(dta a, dta b)
{
	if(a.val2>b.val2) return false;
	if(a.val2==b.val2 && a.i > b.i) return false;
	return true;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n, k; cin>>n>>k;
		vector<dta> a(n);
		for(int i = 0; i<n; i++)
		{
			cin>>a[i].val1;
			a[i].val2 = abs(k-a[i].val1);
			a[i].i = i;
		}
		sort(a.begin(),a.end(),compare);
		for(int i = 0; i<n; i++) cout<<a[i].val1<<" ";
		cout<<endl;
	}
	return 0;
}

