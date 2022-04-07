#include<iostream>
using namespace std;
int a[100], n;
void phantichso()
{
	int i = k, j, R, S,D;
	while (i > 0 && X[i]==1 ) i--;
	if (i>0 ) 
	{
		X[i] = X[i] – 1; D = k - i + 1;
		R = D / X[i]; S = D % X[i];
		k= i;
		if (R>0) 
		{
		for ( j = i +1; j<=i + R; j++)
		X[j] = X[i];
		k = k + R;
		}
		if (S>0 ){
			k = k +1; X[k] = S;
		}
	}
	else OK =0;
}
int main()
{

	return 0;
}

