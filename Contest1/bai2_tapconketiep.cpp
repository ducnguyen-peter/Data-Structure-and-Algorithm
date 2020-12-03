#include<iostream>
using namespace std;
int a[1000], n, k;
void result()
{
	for(int i = 0; i < k; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void tapconketiep()  
{
	int i = k - 1;
	while(i>=0 && a[i]== n - k + i + 1 ) i--;
	if(i>=0)
	{
		a[i]++;
		for(int j = i + 1; j<=k; j++)
		{
			a[j] = a[i] + j - i;
		}
	}
	else for(int l = 0; l < k; l++) a[l] = l + 1;
}
main()
{
	int t; cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0;i<k;i++) cin>>a[i];
		tapconketiep();
		result();
	}
}
