#include<iostream>
using namespace std;
int a[11], n;
void result(int l)
{
	cout<<"(";
	for(int i = 0; i < l-1; i++) 
	{
		cout <<a[i]<<" ";
	}
	cout<<a[l-1];
	cout<<")"<<" ";
}
void partition()
{
	int k = 0;
	a[k] = n;
	while(true){
		result(k + 1);
		int tmp = 0;
		while(k >= 0 && a[k]==1) 
		{
			k--;
			tmp++;
		}
		if(k < 0) return;
		a[k]--;
		tmp++;
		while(a[k] < tmp)
		{
			a[k + 1] = a[k];
			tmp = tmp - a[k];
			k++;
		}
		a[k + 1] = tmp;
		k++;
	}
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		cin>>n;
		partition();
		cout<<endl;
	}
	return 0;
}

