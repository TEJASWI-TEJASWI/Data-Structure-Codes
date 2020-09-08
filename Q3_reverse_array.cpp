#include<iostream>
using namespace std;

struct Array
{
    int A[15];
    int size;
    int lenght;
};

void display(struct Array arr)
{
    int i;
    cout<<"elements are\n";
    for(i=0;i<arr.lenght;i++)
        cout<<arr.A[i]<<" ";
}


int ReversE(struct Array *arr)
{
    int B[arr->lenght];
    int i,j;
    for(i=arr->lenght-1,j=0;i>=0,j<arr->lenght;j++,i--)
    {
        B[j]=arr->A[i];
    }
    for(i=0;i<arr->lenght;i++)
    {
        arr->A[i]=B[i];
    }
}
int main()
{
    struct Array arr={{4,8,10,15,18,21,24,27,29,33,34,37,39,41,43},15,15};
    //cout<<RBinSearch(arr.A,0,arr.lenght,15)<<endl;

    cout<<ReversE(&arr)<<endl;
    display(arr);
}
//cout<<ReversE(&arr)<<endl;
