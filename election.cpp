#include <iostream>
#include <string.h>
using namespace std;

class candidate
{
    int totalVote[3];
    int max;
    public:
   
    void input()
    {
        int i;
        for(i=0;i<3;i++)
        {
            cout<<"enter "<<i<<" canditate total votes"<<endl;
            cin>>totalVote[i];
            max=totalVote[0];
        }
         for(i=0;i<3;i++)
        {
            if(max<totalVote[i])
            {
                max=totalVote[i];
            }
            cout<<totalVote[i]<<endl;
        }
    }
    void answer()
    {
        cout<<"maximum votes are = "<<max;
    }
};

int main()
{
    candidate c;
    c.input();
    c.answer();
    return 0;
}