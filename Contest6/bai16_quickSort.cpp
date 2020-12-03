#include<iostream>
using namespace std;
int partition(int a[], int low, int high) 
{
	int pivot = a[low];
	int left = low;
	for (int i = low + 1; i < high; i++)
	{
		if (a[i] < pivot)
		{
			swap(a[i], a[left]);
			left++;
		}
		swap(pivot, a[left]);
	}
	return left;
}
void quickSort(int a[], int low, int high)
{
	if(low < high)
	{
		int pivot = partition(a, low, high);
		quickSort(a, low, pivot);
		quickSort(a, pivot + 1, high);
	}
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int a[1000],n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		quickSort(a, 0, n);
		for(int j=0;j<n;j++) cout<<a[j]<<" ";
		cout<<endl;
	}
	return 0;
}

