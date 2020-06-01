#include <iostream>
#include <string.h>
using namespace std;

/*calculate the sum of the digit of a number until the number
is a single digit*/

int main()
{
    int num;
    int sum=0;
    int rem=0;
    cout<<"enter the number\n";
    cin>>num;
    
          while(num>10)
          {
              rem=num%10;
              num=num/10;
              sum=sum+rem;
              num=sum;
          }
          
  
    cout<<"last value of num = "<<num;
    return 0;
}