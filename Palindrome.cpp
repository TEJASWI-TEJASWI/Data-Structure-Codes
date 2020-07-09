#include<iostream>
using namespace std;
int main()
{
    char A[]="madam";
    char B[6];
    //char H[26]={0};
    int i,j,k,l;
    for(int i=0;A[i]!='\0';i++)
    {

    }
    i=i-1;
    /*
    cout<<"hi";
    for(i=0;i<j;i++,j--)
    {
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }
    cout<<"hello";
    cout<<A;
    */
    for(int j=0;i>=0,j<6;j++,i--)
    {
        B[j]=A[i];
    }
    cout<<B;

    for(k=0,l=0;A[k]!='\0',B[l]!='\0';k++,l++)
    {

        if(A[k]==B[l])
        {
            //cout<<k;
        }
        cout<<"palindrome";
        if(A[k]!=B[l])
        {
            //cout<<k;
        }
        cout<<"not palindrome";
        k++,l++;
    }
    cout<<B;

}
