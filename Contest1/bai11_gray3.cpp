#include<bits/stdc++.h>
using namespace std;
char g[11];
void gray2binary()
{
	char b[11];
	b[0] = g[0];
	for(int i = 1; i < strlen(g); i++)
	{
		if(b[i-1] == g[i]) b[i] = '0';
		else b[i] = '1';
	}
	for(int j = 0; j < strlen(g); j++) cout<<b[j];
	cout<<" ";
}
int main()
{
	int t; cin>>t;
	while(t--){
		cin>>g;
		gray2binary();
		cout<<'\n';
	}
	return 0;
}

