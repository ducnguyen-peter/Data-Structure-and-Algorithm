#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<queue>
#include<set>
using namespace std;
vector<int> a;
vector<int> b;
int bfs()
{
	queue< pair<vector<int>, int> > q;
	set< vector<int> > st;
	q.push(make_pair(a,0));
	st.insert(a);
	while(!q.empty())
	{
		pair<vector<int>, int> s = q.front(); q.pop();
		if(s.first == b) return s.second;
		vector<int> xoaytrai = s.first;
		xoaytrai.at(0) = s.first.at(3);
		xoaytrai.at(3) = s.first.at(4);
		xoaytrai.at(4) = s.first.at(1);
		xoaytrai.at(1) = s.first.at(0);
		
		vector<int> xoayphai = s.first;
		xoayphai.at(1) = s.first.at(4);
		xoayphai.at(4) = s.first.at(5);
		xoayphai.at(5) = s.first.at(2);
		xoayphai.at(2) = s.first.at(1);
		if(xoaytrai==b||xoayphai==b) return s.second + 1;
		if(st.find(xoaytrai)==st.end())
		{
			st.insert(xoaytrai);
			q.push(make_pair(xoaytrai, s.second + 1));
		}
		if(st.find(xoayphai)==st.end())
		{
			st.insert(xoayphai);
			q.push(make_pair(xoayphai, s.second + 1));
		}
	}
}
int main()
{
	int n;
	for(int i = 1; i<=6; i++)
	{
		cin>>n;
		a.push_back(n);
	}
	for(int i = 1; i<=6; i++)
	{
		cin>>n;
		b.push_back(n);
	}
	cout<<bfs()<<endl;
	return 0;
}

