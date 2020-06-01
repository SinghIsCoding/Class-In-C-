#include <iostream>
#include <string.h>
using namespace std;


int main()
{
   int num[5]={24,9,7,5,1};
   int i=0;
   int index;


   while(i<5)
   {
      cout<<num[i]<<endl;
       i++;
   }
   
   cout<<"\n enter the index you wish to skip \n";
   cin>>index;

  for(int j=0;j<5;j++)
  {
      if(j!=index)
      {
          cout<<num[j]<<endl;
      }
  }



    return 0;
}