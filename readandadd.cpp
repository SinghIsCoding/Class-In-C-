#include <iostream>
#include <string.h>
using namespace std;

class add{
    int a,b;
    public:
    void read()
    {
        cout<<"enter a and b data\n";
        cin>>a>>b;
    }
    void addnumbers()
    {
        cout<<"a + b = "<<a+b;
    }
};


int main()
{
    add num;
    num.read();
    num.addnumbers();

    return 0;
}