#include <iostream>
#include <string.h>
using namespace std;

struct hello{
    private:
    int a;
    void input(int a)
    {
        this->a=a;
        cout<<"hello i'm inputting the value "<<endl;
    }
    public:
    void print()
    {
        input(90);
        cout<<" a = "<<a<<endl;
    }
}h;

int main()
{
    h.print();
    return 0;
}