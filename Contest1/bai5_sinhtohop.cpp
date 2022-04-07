#include<iostream>
using namespace std;
int a[11], n, k;
void init()
{
	for(int i=1;i<=k;i++)
	{
		a[i]=i;
	}
}
void result(int a[], int n)
{
	for(int i = 1; i <= n; i++) 
	{
		cout<<a[i];
	}
	cout<<" ";
}
int dung;
void sinhtohop () {
    int i=k;
    while (i>0 && a[i]==n-k+i) i--;
    if (i>0) {
        a[i]++;
        for (int j=i+1; j<=k; j++) {
            a[j]=a[i]+j-i;
        }
    } else dung=1;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		cin>>n>>k;
		dung = 0;
		init();
		do
		{
			result(a,k);
			sinhtohop();
		}while(dung!=1);
		cout<<endl;
	}

	return 0;
}

