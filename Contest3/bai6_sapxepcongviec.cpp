#include<bits/stdc++.h>
using namespace std;
int n;
struct congviec
{
	int start;
	int end;
	int index;
};
bool compare(congviec s1, congviec s2)
{
	return (s1.end<s2.end);
}
void solution(congviec a[])
{
	sort(a, a + n, compare);
	int i = 0;
	int dem = 1;
//	cout<<a[i].index<<" ";
	for(int j = 1; j < n; j++)
	{
		if(a[j].start>=a[i].end)
		{
//			cout<<a[j].index<<" ";
			i = j;
			dem++;
		}
	}
	cout<<dem<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		cin>>n;
		congviec a[n+1];
		for(int i = 0; i<n; i++)
		{
			cin>>a[i].start;
			a[i].index = i + 1;
		}
		for(int i = 1; i<= n; i++)
		{
			cin>>a[i].end;
		}
		solution(a);
	}
	return 0;
}

