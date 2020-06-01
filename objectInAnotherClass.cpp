#include <iostream>
#include <string.h>
using namespace std;
class num1;
class num2;

class num1{
    int a;
    public:
    num1()
    {
        a=10;
        cout<<a<<endl;
    }
};
class num2{
    int b;
    public:
      num1 n1;
    num2()
    {
        b=20;
        cout<<b<<endl;
    }

};

int main()
{
    num2 n2;
   
return 0;
}
