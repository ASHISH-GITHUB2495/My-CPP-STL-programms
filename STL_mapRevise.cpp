//Map
//syntax:   map<t1,t2> obj;  stores elements in key value combination 
//stores key value pair in sorted order on the basis of key
//it generally used in dictionary type problem
//must key should be unique
#include<bits/stdc++.h>
using namespace std;
class Person{
	public:
		int age;
		string name;
		bool operator < (const Person &rhs)const{
			return (age<rhs.age);
		}
};
int main()
{
	map <string,int,greater<string>> m;
	m["chotu"]=9090909;
	m["Amit"]=78798;
	m.insert({"abhishek",768});
	//problems come when user defined data type
	//you must add compare fuction for uddt........
	
	for(auto e : m)
	{
		cout<<e.first<<" "<<e.second<<endl;
	}
	
	
	return 0;
}
