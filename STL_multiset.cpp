//Multi set
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
 	
 	multiset <int,std::greater<int>> mset={9,3,6,5,8,3,6,5,2};//gerater also
 	mset.insert(90);
 	for(auto e: mset)
 	{
 		cout<<e<<" ";
	 }
 	
 	
 	
 	
 	
 	
 	return 0;
 }
