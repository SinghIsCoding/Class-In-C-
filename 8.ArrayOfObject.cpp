#include <iostream>
#include <string.h>
using namespace std;

class student{
    int roll,year;
    char name[20],add[20];
    public:
    void getinput()
    {
        cout<<"\nenter name\n";
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
        cout<<"\n \t name \t roll no \t address \t Year\n";
        cout<<endl<<"\t"<<name<<"\t"<<roll<<"\t"<<add<<"\t"<<year ;
    }

};

int main()
{
    student s[2];
    for(int i=0;i<2;i++)
    {
         cout<<"\n YOUR DETAILS WILL BE ENTERED HERE\n";
    s[i].getinput();
    s[i].showdata();
    }

    return 0;
}