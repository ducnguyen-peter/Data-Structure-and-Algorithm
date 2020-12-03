#include<iostream>
using namespace std;
int a[100], n;
void swap(int &a, int &b)
{
	int tmp = a; a = b; b = tmp;
}

void init(int a[], int n)
{
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
}

void result(int a[], int n)
{
	for(int i = 1; i <= n; i++){
		cout<<a[i];
	}
	cout<<" ";
}
int OK;
void sinhhoanvi()
{
	int i = n - 1;
	while(i>0 && a[i] > a[i+1]) i--;
	if(i == 0) OK = 0;
	int k = n;
	while(a[k] < a[i]) k--;
	swap(a[i],a[k]);
	int l = i + 1; int r = n;
	while(l < r)
	{
		swap(a[l], a[r]);
		l++;
		r--;
	}
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		cin>>n;
		init(a, n);
		OK = 1;
		while(OK)
		{
			result(a, n);
			sinhhoanvi();
		}
		cout<<endl;
	}
	return 0;
}
