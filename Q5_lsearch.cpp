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
void Swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int Linear_Search(struct Array *arr,int key)
{
    int i;
    for(i=0;i<arr->lenght;i++)
    {
        if(key==arr->A[i])
            Swap(&arr->A[i],&arr->A[0]);
            return i;
    }
    return -1;

    //if(arr->lenght<arr->size)
      //  arr->A[arr->lenght++]=x;
    //lenght++;
}


int main()
{
    struct Array arr={{4,8,10,15,18,21,24,27,29,33,34,37,39,41,43},15,15};
   // cout<<RBinSearch(arr.A,0,arr.lenght,15)<<endl;

    cout<<"index = " << Linear_Search(&arr,4)<<endl;

    display(arr);
}
