#include<bits/stdc++.h>
using namespace std;
struct job{
	int index;
	int deadline;
	int profit;
};
bool compare(job a, job b){
	return(a.profit>=b.profit);
}
void solution(job a[], int n){
	sort(a, a+n, compare);
	int money = 0;
	int slot[n] = {0};
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = min(n, a[i].deadline) - 1; j >= 0; j--){
			if(slot[j] == 0){
				slot[j] = 1;
				money += a[i].profit;
				count++;
				break;
			}
		}
	}
	cout<<count<<" "<<money<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		job a[n];
		for(int i = 0; i<n; i++)
		{
			cin>>a[i].index>>a[i].deadline>>a[i].profit;
		}
		solution(a, n);
	}
	return 0;
}

