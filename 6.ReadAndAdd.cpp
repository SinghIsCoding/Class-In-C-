#include <iostream>
using namespace std;

class sample{
    int x,y;
    public:
    void xy()
    {
        x=20;
        y=10;
        cout<<"x + y = "<<x+y;
    }
};

int main()
{
    sample s;
    s.xy();

    return 0;
}
