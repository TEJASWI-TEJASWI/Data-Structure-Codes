#include<iostream>
using namespace std;

int subArraySum(int arr[], int n, int sum)
{
    int curr_sum, i, j;

    // Pick a starting point
    for (i = 0; i < n; i++) {
        curr_sum = arr[i];

        // try all subarrays starting with 'i'
        for (j = i + 1; j <= n; j++) {
            if (curr_sum == sum) {
                cout << "Sum found between indexes "
                     << i << " and " << j - 1;
                return 1;
            }
            if (curr_sum > sum || j == n)
                break;
            curr_sum = curr_sum + arr[j];
        }
    }

    cout << "No subarray found";
    return 0;
}

// Driver Code
int main()
{
    int arr[] = { 1, 4, 20, 3, 10, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 33;
    subArraySum(arr, n, sum);
    return 0;
}

/*
int main()
{
    int A[]={1, 4, 20, 3, 10, 5};
    int K=33;
    int Sum=0;
    int n = sizeof(A)/sizeof(A[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int k=33;
            int Sum=0;
            if(k!=Sum)
            {
                Sum=Sum+A[j];
            }
            else
                for(int i;i<j;i++)
                    cout<<A[i];
        }
    }

    /*int k=10;
    int H[16]={0};
    for(int i=0;i<16;i++)
    {
        if(H[k-A[i]]!= 0)
        {
        cout<<A[i] <<" "<<k-A[i]<<" " <<k;
        }
        H[A[i]]++;
    }*/



