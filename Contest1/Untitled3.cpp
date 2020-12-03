#include<bits/stdc++.h>
using namespace std;
void solution(string &a)
{
	int i = a.size()-1;
	while(i>=0 && a[i]=='0')
	{
		a[i] = '1';
		i--;
	}
	if(i>=0) a[i] = '0';
	cout<<a<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		string a; cin>>a;
		solution(a);
//		cout<<a<<endl;
	}
	return 0;
}

