#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
void sinhnhiphan(string x)
{
	int n = x.length();
	int i = n-1;
	while(i >= 0 && x[i] == '1')
	{
		x[i] = '0';
		i--;
	}
	if(i >= 0) x[i] = '1';
	for(i = 0; i < n; i++) printf("%c", x[i]);
}
int main()
{
	int t; scanf("%d", &t);
	string x;
	while(t--)
	{
		cin>>x;
		sinhnhiphan(x);
		printf("\n");
	}
	return 0;
}

