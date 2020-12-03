#include<iostream>
using namespace std;
string s;
int n, x[11];
bool chuaxet[11];
void init()
{
	cin>>s; n = s.length();
	for(int i = 0; i < n; i++)
	{
		chuaxet[i] = true;
	}
}
void result()
{
	for(int i = 0; i < n; i++) cout<<s[x[i]];
	cout<<" ";
}
void hoanvikitu(int i)
{
	for(int j = 0; j < n; j++)
	{
		if(chuaxet[j]){
			x[i] = j; chuaxet[j] = false;
			if(i==n-1) result();
			else hoanvikitu(i + 1);
			chuaxet[j] = true;
		}
	}
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		init();
		hoanvikitu(0);
		cout<<endl;
	}

	return 0;
}

