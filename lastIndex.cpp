#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    char name[10];
    strcpy(name,"riya");
     
     cout<<name<<endl;
     for(int i=0;name[i]!='\0';i++)
     {
         if(name[i+1]=='\0')
         {
             cout<<name[i]<<" on "<<i<<" index";
         }
     }


    return 0;
}