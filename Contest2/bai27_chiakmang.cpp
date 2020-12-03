#include<bits/stdc++.h>
using namespace std;
int ok[100], a[100];
int s, dem = 0, n, k;
bool check = false;
void Try(int sum, int dem)
{
	if(check==true) return;
	if(dem==k)
	{
		check = true;
		return;
	}
	for(int i = 1; i <=n; i++)
	{
		if(ok[i] == 0)
		{
			ok[i] = 1;
			if(sum==s)
			{
				Try(0, dem + 1);
				return;
			}
			if(sum>s) return;
			else Try(sum + a[i], dem);
		}
		ok[i] = 0;
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		int tmp = 0;
		cin>>n>>k;
		for(int i = 0; i <n; i++)
		{
			cin>>a[i];
			tmp += a[i];
			ok[i] = 0;
		}
		if(tmp%k!=0) cout<<0<<endl;
		else
		{
			s = tmp/k;
			Try(0,0);
			if(check==true) cout<<1<<endl;
			else cout<<0<<endl;
		}
	}
	return 0;
}

