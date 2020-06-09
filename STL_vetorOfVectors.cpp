#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector <vector <int>> tree;
	int edge,u,v;
	int n;
	cin>>edge;
	tree.resize(edge);
	
	for(int i=0;i<edge;i++)
	{
		cin>>u>>v;
		tree[u].push_back(v);
		tree[v].push_back(u);
		
	}
	for(auto i : tree)
	{
		for(auto j : i)
		  cout<<j<<"->";
		  cout<<endl;
 	}
	
	
	
	
	
	return 0;
}
