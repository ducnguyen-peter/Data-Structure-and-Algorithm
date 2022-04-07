#include<iostream>
using namespace std;
#define f(i,n) for(int i = 0; i < n; i++)
#define M 10000007
typedef long long ll;
typedef struct matran
{
	int n;
	int m[10][10];
}matran;
matran operator * (matran A, matran B)
{
	int i, j, k, n= A.n;
	matran C; C.n = n;
	for(int i = 0; i<n;i++)
		for(int j = 0;j<n;j++)
		{
			C.m[i][j] = 0;
			for(k=0;k<n;k++)
				C.m[i][j] = (C.m[i][j]+A.m[i][k]*B.m[k][j]%M)%M;
		}
} 
matran powerM(matran A, int n)
{
	if(n==1) return A;
	matran tmp = powerM(A,n/2);
	if(n%2==0) return tmp*tmp;
	else return A*tmp*tmp;
}
int main()
{
	int t,n,k,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		matran A;
		A.n=2; A.m[0][0] = 1; A.m[1][0] = 1;
		A.m[1][1] = 0;
		matran KQ = powerM(A,n);
		cout<<KQ.m[0][1]<<endl;
	}
	return 0;
}

