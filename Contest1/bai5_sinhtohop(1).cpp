#include<bits/stdc++.h>
using namespace std;
int n, k, a[11];
void init() {
	for(int i = 1; i <= k; i++) a[i] = i;
}
void result() {
	for(int i = 1; i <= k; i++) cout<<a[i];
	cout<<" ";
}
void sinhtohop(int i) {
	for(int j = a[i-1] + 1; j <= n-k+i; j++) {
		a[i] = j;
		if(i==k) result();
		else sinhtohop(i + 1);
	}
}

int main()
{
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		init();
		sinhtohop(1);
		cout<<"\n";
	}
	return 0;
}

