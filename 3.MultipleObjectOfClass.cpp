#include <iostream>
using namespace std;
 
 class sample{
     public:
     int x;
 };

 int main()
 {
     sample a,b;
    a.x=10;
    b.x=20;
    cout<<"first object "<<a.x<<endl;
    cout<<"second object "<<b.x<<endl;

  return 0;

 }