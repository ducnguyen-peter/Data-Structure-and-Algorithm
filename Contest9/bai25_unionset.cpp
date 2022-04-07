#include<bits/stdc++.h>
#include<vector>
using namespace std;
int v, e;
struct canh{
	int dau;
	int cuoi;
};
struct graph{
	int v;
	int e;
	vector<canh> E;
};
struct subset{
	int parent;
	int rank;
};

int find_parent(int u, vector<subset> b)
{
	while(b[u].parent != u) u = b[u].parent;
	return b[u].parent;
}
void unIon(vector<subset>&b, int s, int t)
{
	s = find_parent(s,b);
	t = find_parent(t,b);
	if(b[s].rank<b[t].rank)
		b[s].parent = t;
	else if(b[s].rank>b[t].rank)
		b[t].parent = b[s].parent;
	else{
		b[s].parent = t;
		b[t].rank++;
	}
}
int union_find(graph a)
{
	vector<subset>b;
	for(int i = 0; i <= a.v + 1; i++)
		b.push_back({i,0});
	for(int i = 0; i < a.E.size(); i++)
	{
		int x = find_parent(a.E[i].dau, b);
		int y = find_parent(a.E[i].cuoi, b);
		if(x==y) return 1;
		unIon(b,x,y);
	}
	return 0;
}
int main()
{
	int t; cin>>t;
	while(t--){
		graph a;
		cin>>a.v>>a.e;
		int x, y;
		for(int i = 1; i <= a.e; i++)
		{
			cin>>x>>y;
			a.E.push_back({x,y});
		}
		if(union_find(a)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}

