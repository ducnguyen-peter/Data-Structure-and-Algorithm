#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n, k = 0;
		cin>>n;
		int a[n] = {0};
		for(int i = 0; i<n; i++)
		{
			cin>>a[i];
			k+=a[i];
		}
		if(k%2==1) cout<<"NO";
		else{
			int s = k/2;
			int pb[s+1] = {0};
			pb[0] = 1;
			for(int i = 0; i<n; i++)
			{
				for(int j = s; j>=a[i];j--)
				{
					if(pb[j-a[i]]) pb[j] = 1;
				}
			}
			if(pb[s]) cout<<"YES";
			else cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}

