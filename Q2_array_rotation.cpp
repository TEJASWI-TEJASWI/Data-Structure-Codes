// C++ program to rotate an array by
// d elements
#include<iostream>
using namespace std;

/*Function to left Rotate arr[] of
  size n by 1*/
void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    arr[i] = temp;
}


/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[],int d, int n )
{
    for (int i=0;i<d;i++)
    {
        leftRotatebyOne(arr, n ) ;
    }
}


/* Display function to print an array */
void display(int arr[], int n )
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
/* Main program to test above functions */
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function calling
    leftRotate(arr, 2, n);
    display(arr, n);

    return 0;
}