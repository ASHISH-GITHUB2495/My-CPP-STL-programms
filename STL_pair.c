#include<iostream>
using namespace std;
class student_t_distribution{
 private:
     string name;
     int age;
 public:
    void setStudent (string s,int a)
    {
        name=s;
        age=a;
    }
    void showStudent ()
    {
        cout<<"\n Name:"<<name;
        cout<<"\n Age:"<<age;
    }
    };
int main()
{
    pair <string,int> p1;
    pair <string,string> p2;
    pair <string,float> p3;
    pair <int,Student> p4; //student class made by programmer
    p1=make_pair("rahul",16);
    p2=make_pair("India","new delhi");
    p3=make_pair("c++",345.6f);
    student s1;
    s1.setStudent("Ashiwar",19);
    p4=make_pair(1,s1);
    cout<<"\npair 1";
    cout<<p1.first<<" "<<p1.second;
    cout<<"\npair 2";
    cout<<p2.first<<" "<<p2.second;
    cout<<"\npair 3";
    cout<<p3.first<<" "<<p3.second;
    cout<<"\npair 4";
    cout<<p4.first<<" "<<p4.second.showStudent;



}
