#include<bits/stdc++.h>
#include<string>
using namespace std;
void init(int a[], int r[], int D)
{
	for(int i = 1; i <= 9; i++) a[i] = i;
	for(int i = 1; i<= D; i++) r[i] = 1;
}
void solution(int S, int D, int a[], int r[])
{
	while(D--)
	{
		int s = S;
		for(int i = 1; i <= 9; i++)
		{
			s-=a[i];
			if(s==0) 
		}
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
/*	float x = sqrt(t);
	int y = (int)sqrt(t);
	cout<<x<<" "<<y<<endl;
	if(x==y) cout<<1;
	else cout<<0;*/
		int S, D;
		cin>>S>>D;
		int a[9];
//		init(a);
		
		solution(S,D,a);
		cout<<endl;
	}
	return 0;
}

