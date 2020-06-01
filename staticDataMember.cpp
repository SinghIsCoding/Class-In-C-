#include <iostream>
#include <string.h>
using namespace std;

class test{
   public:
   static int a;
   void get()
   {
       cout<<"\n a=\n";
       cin>>a;
   }
};
int test :: a = 10;


int main()
{
    cout<<"a= "<<test::a;
  test :: a = 100;
  cout<<"\n a = "<<test :: a;
  test t;
  t.get();
  return 0;
}