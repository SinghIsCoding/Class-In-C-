#include <iostream>
#include <string.h>
using namespace std;

class student{
    char name[20];
    public:
    void initial();
};

void student::initial()
{
    strcpy(name, "Riya Singh");
    cout<<"My name is "<<name;
}

int main()
{
    student s;
    s.initial();
    return 0;
}