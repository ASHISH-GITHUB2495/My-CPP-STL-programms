#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <int,string> coustmer;
    coustmer[100]="gajendra";
    coustmer[123]="dilip";
    coustmer[345]="rajesh";
    coustmer[200]="rahul";
coustmer.insert(pair<int,string>(205,"ashish"));
    map <int,string> c
    {{123,"dilip"},{100,"rahul"},{234,"hola"}};
    cout<<coustmer[100]<<endl<<endl;

  map <int,string> :: iterator it=coustmer.begin();
  while(it!=coustmer.end())
  {
      cout<<it->first<<endl;
      it++;
  }
  cout<<endl<<coustmer.at(100);
cout<<"the size of map is :"<<coustmer.size();
cout<<"\n\n\n inserting data: "<<endl;

cout<<"\n";




cout<<"\n\n\n";


}
