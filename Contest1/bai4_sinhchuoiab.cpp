#include<iostream>
using namespace std;
int a[1000], n, OK;
void init()
{
	for(int i = 0; i < n; i++) a[i] = 0;
}
void result()
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] == 0) cout<<"A";
		if(a[i] == 1) cout<<"B";
	}
	cout<<" ";
}
void sinhchuoiAB()
{
	int i = n - 1;
	while( i>=0 && a[i]==1) //000
	{
		a[i] = 0;
		i--;
	}
	if(i >= 0) a[i] = 1;
	else OK = 0;
}
main()
{
	int t;
	cin>>t;
	for(int i = 1; i <= t; i++)
	{
		cin>>n;
		init();
		OK = 1;
		while(OK==1)
		{
			result();
			sinhchuoiAB();
		}
		cout<<endl;
	}
	return 0;
}

