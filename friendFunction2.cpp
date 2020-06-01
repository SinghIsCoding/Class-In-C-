#include <iostream>
#include <string.h>
using namespace std;

class faculty;
class student;

//1st class
class student{
    int roll,number;
    char name[10];
    char favTeacher[10];
    public:
    //creating constructor
    student()
    {
        roll=1234;
        number=6201172288;
        strcpy(name,"Riya");
        strcpy(favTeacher,"Rahul Sir");
    }
    friend void Info(faculty,student); //friend function declaration
    ~ student()
    {
      cout<<"I am Outta student class \n";
    }
};

//2nd class
class faculty{
    int number;
    char name[10];
    char subject[10];
    char favStudent[10];
    public:
    //creating constructor
    faculty()
    {
        number=234;
        strcpy(name,"Rahul");
        strcpy(subject,"DS");
        strcpy(favStudent,"Riya");
    }
     friend void Info(faculty,student); //friend function declaration
     ~ faculty()
    {
      cout<<"I am Outta faculty class \n";
    }
};

//friend function definition
void Info(faculty f, student s)
{
     //student info printing
     cout<<"number = "<<s.number<<endl;
     cout<<"roll = "<<s.roll<<endl;
     cout<<"name = "<<s.name<<endl;
     cout<<"favourite teacher = "<<s.favTeacher<<endl;

     //faculty info printing
      cout<<"number = "<<f.number<<endl;
     cout<<"name = "<<f.name<<endl;
     cout<<"subject = "<<f.subject<<endl;
     cout<<"favourite student = "<<f.favStudent<<endl;

}

int main()
{
    faculty f;
    student s;
    Info(f,s);

    return 0;
}