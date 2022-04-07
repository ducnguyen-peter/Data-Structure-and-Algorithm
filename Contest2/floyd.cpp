#include<bits/stdc++.h>
using namespace std;
int a[100][100], n = 4;
int d[100][100], next[100][100];
int main()
{
	ifstream in;
	in.open("graph.dat");
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			in >> a[i][j];
	in.close();
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			d[i][j] = a[i][j];
			next[i][j] = j;
		}
	}
	for(int k = 1; k <= n; k++){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(d[i][j] > d[i][k] + d[k][j]){
					d[i][j] =  d[i][k] + d[k][j];
					next[i][j] = next[i][k];
				}
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			//ReconstructPath
			int u = i;
			cout << u << " ";
			while(u != j){
				u = next[u][j];
				cout << u << " ";
			}
			cout << ": " << d[i][j];
			cout << endl;
		}
	}
	return 0;
}

