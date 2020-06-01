#include <iostream>
#include <conio.h>
using namespace std;

class IntroFriendFuction{
    int a;
    int b;
    public:
    void geta()
    {
        a=90;
    }
    void getb()
    {
        b=90;
    }
    friend void best(IntroFriendFuction);

};

void best(IntroFriendFuction i)
{
     int c= i.a+i.b;
     cout<<"a+b="<<c;
}

int main()
{
    IntroFriendFuction i;
   i.geta();
   i.getb();
   best(i);
   return 0;
}