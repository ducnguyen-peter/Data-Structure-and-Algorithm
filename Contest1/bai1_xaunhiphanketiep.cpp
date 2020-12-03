#include<iostream>
using namespace std;
void sinhnhiphan(string x)
{
	int n = x.length();
	int i = n-1;
	while(i >= 0 && x[i] == '1')
	{
		x[i] = '0';
		i--;
	}
	if(i >= 0) x[i] = '1';
	cout<<x<<"\n";
}
int main()
{
	int t; cin>>t;
	string x;
	while(t--)
	{
		cin>>x;
		sinhnhiphan(x);
	}
	return 0;
}

