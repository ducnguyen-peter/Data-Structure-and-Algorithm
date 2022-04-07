#include<bits/stdc++.h>
using namespace std;
char b[11];
int n;
char* binary2gray()
{
	char g[11];
	g[0] = b[0];
	for(int i = 1; i < strlen(b); i++)
	{
		if(b[i-1] == b[i]) g[i] = '0';
		else g[i] = '1';
	}
	return g;
}
int main()
{
	int t; cin>>t;
	while(t--){
		cin>>b;
		cout<<binary2gray();
		cout<<"\n";
	}
	return 0;
}

