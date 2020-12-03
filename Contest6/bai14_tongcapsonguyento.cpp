#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<bool> ok(1000007,false);
void sang()
{
	ok[0] = ok[1] = true;
	for(ll i = 2; i<=1000000; i++)
	{
		if(!ok[i])
		{
			for(ll j = i*i; j<=1000000; j+=i)
				ok[j] = true;
		}
	}
}
int main()
{
	int t; cin>>t;
	sang();
	while(t--){
		ll n; cin>>n;
		bool test = false;
		for(ll i = 2; i<=n; i++)
		{
			if(ok[i]==false && ok[n-i]==false)
			{
				cout<<i<<" "<<n-i<<endl;
				test = true;
				break;
			}
		}
		if(!test) cout<<-1<<endl;
	}
	return 0;
}

