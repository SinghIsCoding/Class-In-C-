#include <iostream>
#include <string.h>
using namespace std;

class sample{
  char name[20];
  public:
  void initial()
  {
      strcpy(name,"RIYA");
      cout<<"My name is "<<name;
  }
};

int main()
{
    sample s;
    s.initial();

    return 0;
}