#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mp make_pair
#define pb push_back

using namespace std;
struct data{
	int val;
	int pos;
};

main(){
	data *a;
	int n, t, count;
	cin>>t;
	while(t--){
		cin>>n;
		a = new data[n];
		for(int i = 0; i<n; ++i){
			cin>>a[i].val;
			a[i].pos = i;
		}
		count = 0;
		for(int i = 0; i < n; ++i){
			if(a[i].pos != i){
				count++;
				swap(a[i], a[a[i].pos]);
			}
		}
		cout<<count<<endl;
	}
}

