#include <iostream>
#include <string.h>
using namespace std;

//private member function
class initial
{
    int a;
    void hello()  //private member function
    {
        a=100;
    }
    public:
    void print()
    {
        hello();
        cout<<"a = "<<a<<endl;
    }

}i;

int main()
{
    i.print();

    return 0;
}