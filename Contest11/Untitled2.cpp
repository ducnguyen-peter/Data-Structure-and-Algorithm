#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
	node(int x){
		data = x;
		left = NULL;
		right = NULL;
	}
};
int find(int b[], int start, int x)
{
	int i = 0;
	while(b[start+i]!=x) i++;
	return i;
}
node *buildtree(int a[], int b[], int ts, int gs, int n)
{
	if(n==0) return NULL;
	node *temp = new node(a[ts]);
	int i = find(b,gs,a[ts]);
	temp->left = buildtree(a,b,ts+1,gs, i);
	temp->right = buildtree(a,b,ts+i+1,gs+i+1,n-1-i);
	return temp;
}
void Duyet_sau(node *root)
{
	if(root == NULL) return;
	Duyet_sau(root->left);
	Duyet_sau(root->right);
	cout<<root->data<<" ";
}
void sol(int a[], int b[], int n)
{
	node *root = buildtree(a,b,0,0,n);
	Duyet_sau(root);
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int a[n],b[n];
		for(int i = 0; i < n; i++) cin>>b[i];
		for(int i = 0; i < n; i++) cin>>a[i];
		sol(a,b,n);
	}
	return 0;
}

