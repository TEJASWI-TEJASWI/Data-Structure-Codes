
#include<iostream>
using namespace std;

bool majority_ele(int arr[], int n)
{
//    int n = sizeof(arr)/sizeof(arr[0]);
    int H[n]={0};
    for(int i=0;i<n;i++)
    {
        H[i]++;


        if(H[arr[i]]>=n/2)
        {
            return true;
        }
    }
    return false;
}

// Driver code
int main()
{
        int arr[] = { 2, 3, 9, 2, 2};
        int n = sizeof(arr)/sizeof(arr[0]);
        if (majority_ele(arr,n))
            cout << "Yes";
        else
            cout << "No";
        return 0;
}
