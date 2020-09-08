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


int RBinSearch(int a[],int l,int h,int key)
{
    int mid=0;
    if(l<=h)
    {
    mid=(l+h)/2;
    if(key==a[mid])
        return mid;
    else if(key<a[mid])
        return RBinSearch(a,l,mid-1,key);
    }
    else
        return RBinSearch(a,mid+1,h,key);
    return -1;
}

int main()
{
    struct Array arr={{4,8,10,15,18,21,24,27,29,33,34,37,39,41,43},15,15};
    cout<<RBinSearch(arr.A,0,arr.lenght,15)<<endl;
    display(arr);
}
