#include<bits/stdc++.h>
using namespace std;
string s;
int a[100000];
void init()
{
	int n = s.length();
	for(int i = 0; i < n; i++)
	{
		if(s[i]=='[') a[i] = 0;
		if(s[i]==']') a[i] = 1;
	}
//	for(int i = 0; i<n;i++) cout<<a[i];
//	cout<<endl;
}
void solution(){
	int dem = 0, dem0 = 0, dem1 = 0;
	int n = s.length();
	for(int i = 0; i < n; i++)
	{
		if(a[i]==0) dem0++;
		if(a[i]==1) dem1++;
	}
	if(dem0!=dem1)
	{
		cout<<-1<<endl;
		return;
	}
	else{
		for(int i = 0; i < n; i++)
		{
	//		if(a[i]==0) dem0++;
	//		else if(a[i]==1) dem1++;
			for(int j = i + 1; j < n; j++)
			{
				if(a[i]!=i%2&&a[j]!=a[i])
				{		
					swap(a[i],a[j]);
					dem+= j-i;
					break;
				}
			}
		}
	}
	cout<<dem<<endl;
}
void result()
{
	for(int i = 0; i < s.length();i++)
	{
		if(a[i]==0) cout<<"[";
		else cout<<"]";
	}
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		cin>>s;
		int a[s.length()+1];
		init();
/*		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}*/
		solution();
//		result();
	}
	return 0;
}

