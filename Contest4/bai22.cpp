#include<bits/stdc++.h>
#define f(i, n) for(int i = 1; i <= n; i++)
using namespace std;
int *a, n, k;
void timnhiphan(int low, int high){
	low = 1, high = n;
	int mid = (low+high)/2;
	while(low<high)
	{
		if(k > a[mid]) low = mid + 1;
		else if(k < a[mid]) high = mid - 1;
		else {
			cout<<mid<<endl; return;
		}
		mid = (low + high)/2;
	}
	cout<<"NO"<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		a = new int[n];
		cin>>n>>k;
		f(i,n) cin>>a[i];
		timnhiphan(0, n);
		delete a;
	}
	return 0;
}
