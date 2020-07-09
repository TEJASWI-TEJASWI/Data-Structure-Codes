#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"Enter the number :";

    if(n>0)
    {
        while(n%2 == 0)
        {
            n/=2;
        }
        if(n == 1)
        {
            cout<<"YES"<<endl;
        }
        if(n%2 !=0)
        {
            cout<<"NO";
        }
    }
    if(n == 0 || n != 1)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
