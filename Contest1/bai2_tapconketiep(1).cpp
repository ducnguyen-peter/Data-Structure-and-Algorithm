#include<iostream>
using namespace std;
int n, k;
int a[11];
void init()
{
	for(int i=1;i<=k;i++)
	{
		a[i]=i;
	}
}

void result(int a[], int n)
{
	for(int i = 1; i <= n; i++){
		cout<<a[i];
	}
}
int dung=0;
void BCTOHOP()
{
	int i = k;
	while(i>=0 && a[i]==n-k+i) i--;
	if(i > 0)
	{
		a[i]++;
		for(int j=i+1; j<=k; j++)
		{
			a[j] = a[j-1] + j - i;
		}
	}
	else dung = 1;
}
int main()
{
	cin>>n>>k;
	for (int i=0; i<k; i++) cin>>a[i];
//	init();
	result(a,k);
	cout<<endl;
	BCTOHOP();	
	return 0;
}
