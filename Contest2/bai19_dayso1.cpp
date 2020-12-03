#include<iostream>
using namespace std;
int a[1000], n;
void init()
{
	cin>>n;
	for(int i = 1; i <= n; i++) cin>>a[i];
}
void result()
{
	cout<<"[";
	for(int i = 1; i <= n; i++) {
		cout<< a[i];
		if(i<n) cout<<" ";
	}
	cout<<"]"<<endl;
}
void dayso1()
{
	for(int j = 1; j <= n; j++)
	{
		a[j] = a[j] + a[j + 1];
	}
	n--;
	result();
	if(n==1) return;
	else dayso1();
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		init();
		result();
		dayso1();
	}
	return 0;
}

