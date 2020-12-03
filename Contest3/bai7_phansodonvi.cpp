#include<bits/stdc++.h>
using namespace std;
/*struct phanso
{
	int tu;
	int mau;
};
int gcd(int a, int b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
phanso reduce(phanso a)
{
	phanso x;
	x.tu = a.tu/gcd(a.tu, a.mau);
	x.mau = a.mau/gcd(a.tu, a.mau);
	return x;
}
phanso subtract(phanso a, phanso b)
{
	phanso x;
	x.tu = abs(a.tu*b.mau - a.mau*b.tu);
	x.mau = a.mau*b.mau;
	return reduce(x);
}
*/
void solution(int a, int b)
{
	if(a==0&&b==0) return;
	if(a%b==0) 
	{
		cout<<a/b<<endl;
		return;
	}
	if(b%a==0){
		cout<<1<<"/"<<b/a<<endl;
		return;
	}
	if(a>b){
		cout<<a/b<<" + ";
		solution(a%b, b);
		return;
	}
	int n = b/a + 1;
	cout<<1<<"/"<<n<<" + ";
	int new_a = a*n - b;
	int new_b = b*n;
	solution(new_a,new_b);	
}
int main()
{
	int t; cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		solution(a,b);
	}
	return 0;
}

