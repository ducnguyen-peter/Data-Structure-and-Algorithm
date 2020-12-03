#include<bits/stdc++.h>
using namespace std;
int string2int(string a)
{
	int kq=0;
	for(int i = 0; i < a.size(); i++)
	{
		kq = kq*10 + int(a[i]-'0');
	}
	return kq;
}
int tinh(int a, int b, string s)
{
	if(s=="+") return a + b;
	if(s=="-") return a - b;
	if(s=="*") return a * b;
	if(s=="/") return a / b;
}
int sol(vector<string> a)
{
	int i = a.size() - 1;
	while(a[i]!="+"||a[i]=="-"||a[i]=="*"||a[i]=="/") i--;
	while(i>=0)
	{
		string s = a[i];
		a[i--] = string(tinh(string2int(a[2*i+1]), string2int(a[2*i+2]), s)); 
	}
	return a[0];
}
int main()
{
	int t; cin>>t;
	while(t--){
		string n;
		vector<string> s(n);
		for(int i = 0; i < n; i++) cin>>s[i];
		cout<<sol(s)<<endl;
	}
	return 0;
}

