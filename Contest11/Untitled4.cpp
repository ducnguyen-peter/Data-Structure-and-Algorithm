#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
	node(int x)
	{
		data = x;
		left = right = NULL;
	}
};
node *find(node *root, int u)
{
	if(root==NULL) return NULL;
	if(root->data==u) return root;
	node *tmp1 = find(root->left,u);
	node *tmp2 = find(root->right, u);
	if(tmp1!=NULL) return tmp1;
	else return tmp2;
}
void BFS(node *root)
{
	queue<node*>q;
	if(root!=NULL) q.push(root);
	while(!q.empty())
	{
		node *s = q.front();
		q.pop();
		cout<<root->data;
		if(root->left!=NULL) q.push(root->left);
		if(root->right!=NULL) q.push(root->right);
	}
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int u,v;
		char x;
		cin>>n;
		node *root = NULL;
		while(n--)
		{
			cin>>u>>v>>x;
			if(root==NULL) root = new node(u);
			node *tmp = find(root,u);
			if(X=='L') tmp->left = new node(v);
			else tmp->right = new node(v);
		}
		BFS(root)
	}
	return 0;
}

