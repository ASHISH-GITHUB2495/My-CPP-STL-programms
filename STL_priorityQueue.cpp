#include <iostream>>     
#include <queue>

using namespace std;

int main ()
{
    priority_queue<int,std::less<>> pq1;
    
    pq1.push(30);  // inserts 30 to pq1 , now top = 30
    pq1.push(40);  // inserts 40 to pq1 , now top = 40 ( maxinmum element)
    pq1.push(90);  // inserts 90 to pq1 , now top = 90  
    pq1.push(60);	// inserts 60 to pq1 , top still is 90	
    
     while(!pq1.empty())
 { int i=pq1.top();pq1.pop();
 	cout<<i<<endl;
 }
    return 0;
}

