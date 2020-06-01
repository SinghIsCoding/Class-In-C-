#include <iostream>
#include <string.h>
using namespace std;

class student{
    int roll,year;
    char name[20],add[20];
    public:
    void getinput()
    {
        cout<<"enter name\n";
        cin>>name;
         cout<<"enter Year\n";
        cin>>year;
         cout<<"enter Address\n";
        cin>>add;
         cout<<"enter Roll No.\n";
        cin>>roll;

    }

    void showdata()
    {
        cout<<"\n \t name \t roll no \t address \t Year";
        cout<<endl<<"\t"<<name<<"\t"<<roll<<"\t"<<add<<"\t"<<year ;
    }

};

int main()
{
    student s;
    s.getinput();
    s.showdata();

    return 0;
}