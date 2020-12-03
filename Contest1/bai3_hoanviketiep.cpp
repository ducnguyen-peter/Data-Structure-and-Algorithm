#include<iostream>
using namespace std;
int a[1000], n;
void sort(int k)
{
	for(int i = k; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i]>a[j]) swap(a[i],a[j]);
		}
	}
}
void swap(int &a, int &b)
{
	int tmp = a; a = b; b = tmp;
}
void result()
{
	for(int i = 1; i <= n; i++) cout << a[i] <<" ";
	cout<<endl;
}
void hoanvitieptheo()
{
	int i = n - 1;
	while(i>0 && a[i] > a[i+1]) i--;
	if(i == 0) 
	{
		for(int j = 1; j <= n; j++) a[j] = j;
		return;
	}
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
		for(int i = 1; i <= n; i++) cin>>a[i];
		hoanvitieptheo();
		result();
	}
	return 0;
}
/*	if(i>0)
	{
		for(int j = n - 1; j > 0; j--) 
		{
			if(a[j]>a[i])
			{
				swap(a[i], a[j]);
				sort(i+1);
				break;
			}
		}
	}
	else for(int l = 0; l < n; l++) a[l] = l + 1;*/
