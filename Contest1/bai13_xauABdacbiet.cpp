#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int n, k, OK;
int a[100];
vector <string> res;
string s = "";
void Try(int i)
{
	for(int j = 0; j<=1; j++)
	{
		a[i] = j;
		if(i==n-k)
		{
			for(int l = 1; l <= n - k; l++)
			{
				if(l==1 && a[l]==1)
				{
					string tmp ="";
					tmp+=s;
					for(int p = 1; p <= n-k; p++)
					{
						if(a[p]==0) tmp +="A";
						else tmp+="B";
					}
					res.push_back(tmp);
				}
				if(l==n-k && a[l]==1)
				{
					string tmp ="";
					for(int p = 1; p <= n-k; p++)
					{
						if(a[p]==0) tmp +="A";
						else tmp+="B";
					}
					tmp+=s;
					res.push_back(tmp);
				}
				if(a[l]&&a[l-1]&&l>1)
				{
					string tmp ="";
					for(int p = 1; p <= n-k; p++)
					{
						if(p==l) tmp +=s;
						if(a[p]==0) tmp += "A";
						else tmp+="B";
					}
					res.push_back(tmp);
				}
			}
		}
		else Try(i+1);
	}
}
int main()
{
	cin>>n>>k;
	for(int i = 0;i<k;i++) s+="A";
	Try(1);
	sort(res.begin(),res.end());
	cout<<res.size()<<endl;
	for(int i = 0; i <res.size();i++) cout<<res[i]<<endl;
	return 0;
}

