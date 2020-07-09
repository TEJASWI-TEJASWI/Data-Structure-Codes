
/*
This program is for printing AP and it's sum of AP
*/
#include<iostream>
using namespace std;

int main()
{
    int a ,n,d;
    cin>>a;
    cin>>n;
    cin>>d;
    for(int i=0;i<n;i++)
    {
        cout<<(a+i*d)<<endl;

    }
    cout<<"Sum of AP is " <<(n/2)*(a+(n)*d)<<endl;
}
