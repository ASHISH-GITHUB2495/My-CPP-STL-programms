#include<iostream>
#include<array>
using namespace std;

int main()
{
	array <int,4> data_array1={3,4,5,2};
	array <int,4> data_array2={1,2,3,4};

	  for(int i=0;i<4;i++)
        cout<<data_array1.at(i);

          for(int i=0;i<4;i++)
        cout<<data_array2.at(i);
         cout<<endl;

	data_array1.swap(data_array2);


	  for(int i=0;i<4;i++)
        cout<<data_array1.at(i);
         cout<<endl;
          for(int i=0;i<4;i++)
        cout<<data_array2.at(i);
         cout<<endl;
         cout<<"size is"<<data_array1.size();







}

