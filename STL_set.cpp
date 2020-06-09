#include<bits/stdc++.h>
using namespace std;
int main()
{
	set <int> s;
	s.insert(100);
	s.insert(10);
	s.insert(30);
	s.insert(15);
	s.insert(10);
	s.insert(100);
	s.insert(40);
	s.insert(32);
	
	set <int> :: iterator it=s.begin();
	while(it!=s.end())
	{
		cout<<*it<<" ";it++;
	}
	cout<<endl;
	cout<<"erasing 30"<<endl;
	s.erase(30);
	
	
	
	
	cout<<endl;it=s.begin();
	for(;it!=s.end();it++)
	{
		cout<<*it<<" ";
	}cout<<endl;
	cout<<"erasing 10 to below 40"<<endl;
	s.erase(s.find(10),s.find(40));
	
	cout<<endl;it=s.begin();
	for(;it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl<<"clearing entire set"<<endl;
	s.clear();
	cout<<"the size of set is:"<<s.size()<<endl;
	
	
	
	
	
	return 0;
}
