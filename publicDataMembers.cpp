#include <iostream>
#include <string.h>
using namespace std;

class student
{
   public:
   int a;
   void print()
   {
       cout<<"a = "<<a;
   }
};

int main()
{
    student s;
     s.a=10;
    s.print();
 return 0;
}