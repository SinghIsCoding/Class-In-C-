#include <iostream>
#include <string.h>
using namespace std;

class saying
{
    public:
    int a;
    void print()
    {
        cout<<"HELLO";
    }
}s;

void getter(saying s)
{
    s.print();
}

int main()
{
    getter(s);
  return 0;
}