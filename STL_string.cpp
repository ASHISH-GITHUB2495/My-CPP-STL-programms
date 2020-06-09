#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{       ///we cannot use operators here...
/*    char s[20]="hello students";
    int i=0;
    while(s[i]!='\0')
    {
        cout<<s[i];
        i++;
    }
*/
    cout<<"\nDemonstrating the String class:----"<<"\n\n\n";
     string s1;
     string s2("hello their");
     string s3=string ("hello you");
     char str[10]="ashish";
     string s4=str;
     string s5=s4;
     cout<<s1<<endl;
     cout<<s2<<endl;
     cout<<s3<<endl;
     cout<<s4<<endl;
     cout<<s5<<endl;
     cout<<s3+s4<<endl;
     if (s4 == s5)
       cout<<"equal"<<endl;
       else
        cout<<"not equal"<<endl;
cout<<"\n\n\n\n";
cout<<s4<<endl<<s2<<endl<<s3;

cout<<"\n\n Enter your name:"<<endl;
string s6;
cin>>s6;
cout<<"your name is: "<<s6;
cout<<"\n\n\n";

string s;
s.assign("hello");   ///assign
cout<<s<<endl;
s.append("student");///append
cout<<s<<endl;
s.insert(3,"123");  ///insert
cout<<s<<endl;
s.replace(3,3,"");    ///replae with j at index 2
cout<<s<<endl;
s.erase();     ///all erased
cout<<s;
s.assign("hello online student");
int i=s.find("online"); ///returns the starting index of online string
cout<<i<<endl;
string str1="amar" ,str2="akbar";
int j=str1.compare(str2);   ///returns difference between differnt characters
cout<<j<<"\n\n\n";


char st[10];                 ///char to string
string ss="Hello";
strcpy(st,ss.c_str());
cout<<ss;
cout<<endl<<"size of this string is: "<<ss.size(); ///return the size of the string ...


    cout<<"\n\n\n\n";
}
