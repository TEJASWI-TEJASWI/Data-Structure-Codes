#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        {
           if(i==12)
           {
               cout<<i;
               break;

           }
           else if(i==9)
           {
               cout<<i;
               continue;

           }
           else
           {
               cout<<i;
           }


    }
}
