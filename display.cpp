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
void append(struct Array *arr,int x)
{
    if(arr->lenght<arr->size)
        arr->A[arr->lenght++]=x;
    //lenght++;

}
void Insert(struct Array *arr,int index,int x)
{
    int i;
    for(i=arr->lenght;i>index;i--)
        arr->A[i]=arr->A[i-1];
    arr->A[index]=x;
    arr->lenght++;

    //if(arr->lenght<arr->size)
      //  arr->A[arr->lenght++]=x;
    //lenght++;

}
void Delete(struct Array *arr,int joint)
{
    int j,x=0;
    if(joint>=0 && joint<arr->lenght)
    {

        x=arr->A[joint];
        for(j=joint;j<arr->lenght-1;j++)
            arr->A[j]=arr->A[j+1];
        arr->lenght--;
//        return x;
    }


    //if(arr->lenght<arr->size)
      //  arr->A[arr->lenght++]=x;
    //lenght++;

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
int binarysearch(struct Array arr,int key)
{
    int l=0,mid,h;
    h=arr.lenght-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        {
        if(key=arr.A[mid])
            return mid;
        else if (key<arr.A[mid])
            h=mid-1;
        else
            l=mid+1;
        }
        return -1;
    }
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
int GET(struct Array arr,int index)
{
    if(index>=0 && index<arr.lenght)
        return arr.A[index];
    return -1;
}
void SET(struct Array *arr,int index ,int x)
{

    if(index>=0 && index<arr->lenght)
        arr->A[index]=x;
}
int MAX(struct Array arr)
{

    int Max = arr.A[0];
    int i;
    for(i=0;i<arr.lenght;i++)
    {
        if(arr.A[i]>Max)
            Max=arr.A[i];
    }
    return Max;
}

int MIN(struct Array arr)
{

    int Min = arr.A[0];
    int i;
    for(i=0;i<arr.lenght;i++)
    {
        if(arr.A[i]<Min)
            Min=arr.A[i];
    }
    return Min;
}

int SUM(struct Array arr)
{

    int total =0;
    int i;
    for(i=0;i<arr.lenght;i++)
    {
        total=total+arr.A[i];
    }
    return total;
}

int AVG(struct Array arr)
{

    int total =0;
    int i;
    for(i=0;i<arr.lenght;i++)
    {
        total=total+arr.A[i];
    }
    return total/(arr.lenght);
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
/*int isSorted(struct Array arr)
{
    int i;
    for(i=0;i<arr.length-1;i++)
    {
    if(arr.A[i]>arr.A[i+1])
        return 0;
    }
    return 1;
}
*/
void Rearrange(struct Array *arr)
{
    int i,j;
    i=0;
    j=arr->lenght-1;
    while(i<j)
    {
        while(arr->A[i]<0)
            i++;
        while(arr->A[i]>=0)
            j--;
        if(i<j)
            Swap(&arr->A[i],&arr->A[j]);

    }
}
/*int merg(struct Array *arr1,struct Array *arr2)
{
    int i=0;
    int j=0;
    int k=0;
    int c[arr1.lenght+arr2.lenght];
    while(i<m && j<n)
        if(arr1.A[i]<arr2.B[j])
            c[k++]=A[i++];
        else
            c[k++]=B[j++];
    for( ;i<m;i++)
        c[k++]=A[i];
    for( ;j<n;j++)
        c[k++]=B[j];


}

struct Array* Merge(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    int  *arr3[arr1->size];
    while(i<arr1->length && j<arr2->length)
    {
    if(arr1->A[i]<arr2->A[j])
        arr3->A[k++]=arr1->A[i++];
    else
        arr3->A[k++]=arr2->A[j++];
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;
    return arr3;
}

*/
int main()
{
    struct Array arr={{4,-8,10,-15,-18,21,-24,27,-29,-33,34,-37,39,-41,43},15,15};
    //struct Array arr1={{2,6,10,15,25},15,5};
    //struct Array arr2={{3,4,7,18,20},15,5};
    //struct Array *arr3;
    //arr3=Merge(&arr1,&arr2);

    //append(&arr,101);
    //Insert(&arr,2,55);
    //Delete(&arr,4);
    //cout<<"index = " << Linear_Search(&arr,4)<<endl;
    //cout<<RBinSearch(arr.A,0,arr.lenght,15)<<endl;
    //cout<<"get element is "<<GET(arr,15)<<endl;
    //SET(&arr,1,6);
    //cout<<"max  is "<<MAX(arr)<<endl;
    //cout<<"min  is "<<MIN(arr)<<endl;
    //cout<<"sum  is "<<SUM(arr)<<endl;
    //cout<<"avg  is "<<AVG(arr)<<endl;
    //cout<<ReversE(&arr)<<endl;
    Rearrange(&arr);
    display(arr);
    /*struct Array arr1;
    int ch;
    int x,index;
    cout<<"Enter Size of Array";
    cin>>(&arr1.size);
    arr1.A= new int[arrl.size];
    arr1.length=0;
    do
    {
    cout<<"\n\nMenu\n";
    cout<<"1. Insert\n";
    cout<<"2. Delete\n";
    cout<<"3. Search\n";
    cout<<"4. Sum\n";
    cout<<"5. Display\n";
    cout<<"6.Exit\n";
    cout<<"enter you choice ";
    cin>>&ch;
    switch(ch)
    {
        case 1: cout<<"Enter an element and index";
            cin>>&x >> &index;
            Insert(&arr1,index,x);
            break;
        case 2: cout<<("Enter index ");
            cin>>(&index);
            x=Delete(&arr1,index);
            cout<<"Deleted Element is \n"<<x;
            break;
        case 3:cout<<"Enter element to search ";
            cin>> &x;
            index=LinearSearch(&arr1,x);
            cout<<"Element index "<<index;
            break;
        case 4:cout<<"Sum is \n"<<Sum(arr1);
            break;
        case 5:Display(arr1);
    }
}   while(ch<6);*/
    return 0;
}
