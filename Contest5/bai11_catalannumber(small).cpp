#include<bits/stdc++.h>
using namespace std;
string cong(string a, string b)
{
	while(a.size()<b.size()) a = "0"+a;
	while(a.size()>b.size()) b = "0"+b;
	string res = "";
	int nho = 0;
	int len = a.size();
	for(int i = len-1; i>=0; i--)
	{
		int so = int(a[i]-'0') + int(b[i]-'0') + nho;
		res = char(so%10 +'0')+res;
		nho=so/10;
	}
	if(nho>0) res = char(nho+'0')+res;
	return res;
}
string nhan(string s1, string s2)
{
	int len1 = s1.size(), len2 = s2.size();
	int len = len1 + len2;
	vector<int> a,b;
	for(int i = 0; i<len1; i++) a.push_back(int(s1[i] - '0'));
	for(int i = 0; i<len2; i++) b.push_back(int(s2[i] - '0'));
	vector< vector<int> > res(len2);
	int index = 0;
	for(int i = len2 - 1; i>=0; i--)
	{
		int nho = 0, so = 0;
		int t = 0;
		while(t<index)
		{
			res[index].push_back(0);
			t++;
		}
		for(int j = len1-1; j>=0; j--)
		{
			so = a[j]*b[j] + nho;
			res[index].push_back(so%10);
			nho = so/10;
		}
		if(nho>0) res[index].push_back(nho);
		while(res[index].size()<len) res[index].push_back(0);
		reverse(res[index].begin(),res[index].end());
		index++;
	}
	int nho = 0;
	string ans = "";
	for(int j = res[0].size()-1; j>=0; j--)
	{
		int so = nho;
		for(int i = 0; i<res.size();i++)
			so += res[i][j];
		ans = char(so%10+'0') + ans;
		nho = so/10;
	}
	if(nho>0) ans = char(nho+'0') + ans;
	while(ans[0]=='0') ans.erase(ans.begin());
	return ans;
}
int main()
{
/*	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string c[n+5];
		c[0] = c[1] = "1";
		for(int i = 2; i<=n; i++)
		{
			string tmp = "";
			for(int j = 0; j<i; j++)
			{
				string tmp = "0";
				tmp = cong(tmp,nhan(c[j],c[i-j-1]));
			}
			c[i] = tmp;
		}
		cout<<c[n]<<endl;
	}*/
	string s1, s2; cin>>s1>>s2;
	cout<<nhan(s1,s2);
	return 0;
}

