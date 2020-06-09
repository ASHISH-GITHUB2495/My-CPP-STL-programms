#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v1 {10,20,30,40,50};
     vector <char> v2 (4);
     vector <int> v3 (5,10);
     vector <string> v4 (3,"ashish");
     cout<<v4[0]<<endl;
   cout<<v4[1]<<endl;
     cout<<v4[2]<<endl;

  for(int i=0;i<5;i++)
    cout<<v1[i]<<endl;   //like an array
    cout<<"the capacity of v1 is: "<<v1.capacity();

    cout<<"\n\n\n push_back() demonstration";
     vector <int> v;
     cout<<"\nthe capacity of v1 is: "<<v.capacity()<<endl;
     v.push_back(10);
      cout<<"\nthe capacity of v1 is: "<<v.capacity()<<endl;
     v.push_back(20);
     cout<<"\nthe capacity of v1 is: "<<v.capacity()<<endl;
     v.push_back(20);
     cout<<"\nthe capacity of v1 is: "<<v.capacity()<<endl;
      cout<<"\n\n\n pop_back demonstration"<<endl;
      vector <int> vv;
      for(int i=0;i<10;i++)
         vv.push_back(i);
       cout<<"total elements in vector:"<<vv.size()<<endl;
       for(int i=0;i<10;i++)
         cout<<vv[i]<<" ";
         cout<<"\n\n capacity of vv is :"<<vv.capacity()<<endl;

          vv.pop_back();
          vv.pop_back();
          vv.pop_back();
          vv.pop_back();
          cout<<"total elements in vector after pop_back:"<<vv.size()<<endl;
         cout<<"\n\n\n printing after pop_back()"<<endl;
          for(int i=0;i<10;i++)
         cout<<vv[i]<<" ";
           cout<<"\n\n capacity of vv is :"<<vv.capacity()<<endl;
    cout<<"\nvalue at index three is :"<<vv.at(3);
    cout<<"\nfront value is :"<<vv.front()<<endl;
    cout<<"last value is :"<<vv.back()<<endl;

  vv.clear();
  cout<<"size and capacity is:"<<vv.size()<<" "<<vv.capacity()<<endl<<endl;
  cout<<"inserting at middle..................\n\n\n\n";
  vector <int> itr;
  for(int i=0;i<10;i++)
    itr.push_back(i*10);

    for(int i=0;i<10;i++)
    cout<<itr[i]<<endl;

//use of iterators

vector <int> :: iterator it=itr.begin();
itr.insert(it+2,78);
cout<<endl<<endl;
for(int i=0;i<10;i++)
    cout<<itr[i]<<endl;











       cout<<"\n\n\n\n\n";
}
