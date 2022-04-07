#include<bits/stdc++.h>
using namespace std;
struct data{
	int val, pos;
};
bool compare(data a, data b){
	if(a.val<b.val) return true;
	if(a.val==b.val && a.pos > b.pos) return false;
	return true;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<data> a(n);
		for(int i = 0; i<n; i++) 
		{
			cin>>a[i].val;
			a[i].pos = i;
		}
		sort(a.begin(), a.end(), compare);
		int res = 0;
		for(int i = 0; i<n; i++)
		{
			while(a[i].pos!=i)
			{
				res++;
				swap(a[i], a[a[i].pos]);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}

