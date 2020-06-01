#include <iostream>
#include <string.h>
using namespace std;
class num1;
class num2;

class num1{
   int a;
   public:
   void generate1()
   {
       a=20;
   }
   
   void number1()
   {
      cout<<"a = "<<a<<endl;
   }
   friend void both(num1,num2);
};

class num2{
   int b;
   public:
   void generate2()
   {
       b=20;
   }
   void number2()
   {
       cout<<"b = "<<b<<endl;
   }
   friend void both(num1,num2);
};

void both(num1 n1, num2 n2)
{
    n1.number1();
    n2.number2();
    int sum= n1.a + n2.b;
  cout<<"a + b = "<<sum;
}



int main()
{
    num1 n1;
    num2 n2;
    n1.generate1();
    n2.generate2();
    both(n1,n2);
    return 0;
}