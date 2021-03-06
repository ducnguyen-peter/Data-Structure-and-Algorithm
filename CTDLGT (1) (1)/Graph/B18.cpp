#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ONLY_CPP ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

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

int visit[1005];
int dem;

void dfs(int u, vector<int> vect[]){
    visit[u] = 1;
    // cout<<u<<" ";
    dem++;
    for(int i = 0; i < vect[u].size(); i++){
        if(!visit[vect[u][i]]){
            dfs(vect[u][i],vect);
        }
    }
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        int v,e;
        memset(visit,0,sizeof(visit));
        cin>>v>>e;
        vector<int> vect[1005];
        for(int i = 0; i < e; i++){
            int x,y;
            cin>>x>>y;
            vect[x].pb(y);
            // vect[y].pb(x);
        }
        int kt = 0;
        for(int i = 1; i <= v; i++){
            dem = 0;
            dfs(i,vect);
            if(dem<v){
                kt = 1;
                break;
            }
            memset(visit,0,sizeof(visit));
        }
        if(kt == 1) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
   }
    return 0;
}
