#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    class saying{
        int a;
         public:
        saying()
        {
            a=10;
            cout<<"a = "<<a<<endl;
        }
        void print(int a)
        {
           cout<<"this a = "<<this->a<<endl;
           cout<<"outer a = "<<a<<endl;
           
        }
    };

    saying s;
    s.print(100);
}