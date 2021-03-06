#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second

using namespace std;

typedef double ld;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;

const ld pi=2*acos(0);
const int im = INT_MAX;
const int in = INT_MIN;
const int limit = 1e5+5;
const ll M = 1e9+7;

int f[limit];

int sol(vi a, int n){
    int res = 1;
    for(int i = 0; i < n; i++) f[i] = a[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[j] < a[i] && f[i] < f[j] + a[i]) f[i]=f[j]+a[i];
        }
    }
    for(int i = 0; i < n; i++) if(res < f[i]) res = f[i];
    return res;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n,tmp;
        cin>>n;
        vi a;
        for(int i = 0; i < n; i++){
            cin>>tmp;
            a.pb(tmp);
        }
        cout<<sol(a,n)<<endl;
    }
    return 0;
}
