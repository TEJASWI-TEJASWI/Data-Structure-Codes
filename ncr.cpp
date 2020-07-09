#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0) //|| r==n)
        return 1;
    else
        return fact(n-1)*n;
         //fact(n-1,r-1)+fact(n-1,r) ;

}
int C(int n , int r)
{
    int num,den;

    num=fact(n);
    den=fact(n-r)*fact(r) ;

    return num/den ;
     /*if(n==0 || r==n)
        return 1;
    else
        return fact(n-1,r-1)+fact(n-1,r) ;
        */
}
int ncr(int n , int r)
{
    if(r==0 || n==r)
        return 1;
    else
        return ncr(n-1,r-1)+ncr(n-1,r) ;
}
int main()
{
     cout<<C(5,1)<<endl;
     cout<<ncr(4,2)<<endl;

     return 0;
}



