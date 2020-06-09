#include<iostream>
#include<list>


using namespace std;
int main()
{
    list <int> l1;//initilize
    for(int i=0;i<10;i++)
      l1.push_back(i);
    list <string> l2 ;//empty list
    list <int> :: iterator p=l1.begin(); //printing with iterator
    while(p!=l1.end())
    {
        cout<<*p<<endl;
        p++;
    }
    cout<<"\n\ntotal values in the list are: "<<l1.size();
cout<<"\n\ntotal values in the list are: "<<l2.size()<<endl;

list <string> :: iterator pp;


l2.push_back("bhopal");
pp=l2.begin();
cout<<*pp;
l2.pop_back();
cout<<"\n\nafter pop back  :"<<*pp;
cout<<endl<<endl<<endl;
return 0;
}
