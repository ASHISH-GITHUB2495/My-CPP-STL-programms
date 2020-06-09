#include<bits/stdc++.h>
using namespace std;
class Person{
 public :
 	int age;
 	string name;
 	bool  operator < (Person const &rfs)const{
 	
 		return(age<rfs.age);
	 }
	 	bool operator > (Person const &rfs)const{
 	
 		return(age>rfs.age);
	 }
 	
};


int main()
{
	
	set <Person> s;
	 s.insert({12,"ashish"});
	 s.insert({22,"vikram"});
	  s.insert({06,"repesh"});
	
	for(auto e : s)
	{
		cout<<e.name<<" "<<e.age<<endl;
	}
	return 0;
}
