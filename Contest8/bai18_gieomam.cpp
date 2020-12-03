#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int r, c, tmp; 
		cin>>r>>c;
		vector<vector<int> > a;
		for(int i = 0; i < r; i++)
		{
			vector<int > temp;
			temp.clear();
			for(int j = 0; j < c; j++)
			{
				cin>>tmp;
				temp.push_back(tmp);
			}
			a.push_back(temp);
		}
		int ngay = 0;
		while(true){
			int kt = 0;
			vector<vector<int> > b;
			b.clear();
			b = a;
			for(int i = 0; i < r; i++)
			{
				for(int j = 0; j < c; j++)
				{
					if(a[i][j]==2)
					{
						kt = 1;
						b[i][j] = 0;
						if(i>=1)
						{
							if(b[i-1][j]==1) b[i-1][j]++;
						}
						if(j>=1)
						{
							if(b[i][j-1]==1) b[i][j-1]++;
						}
						if(i<=r-2)
						{
							if(b[i+1][j]==1) b[i+1][j]++;
						}
						if(j<=c-2)
						{
							if(b[i][j+1]==1) b[i][j+1]++;
						}
					}
				}
			}
			a.clear();
			a = b;
			if(!kt)
			{
				ngay--;
				break;
			}
			ngay++;
		}
		int check = 1;
		for(int i = 0; i < r; i++)
		{
			for(int j = 0; j < c; j++)
			{
				if(a[i][j] == 1)
				{
					check=0; break;
				}
			}
			if(check==0) break;
		}
		if(check==0) cout<<-1;
		else cout<<ngay<<endl;
	}
	return 0;
}

