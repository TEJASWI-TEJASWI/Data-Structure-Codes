// C++ implementation of the approach
#include<bits/stdc++.h>
using namespace std;

// Function that returns true if
// the array is mirror-inverse
bool mirr_inv(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{

		// If condition fails for any element
		if (arr[arr[i]] != i)
			return false;
        else
            break;
	}

	// Given array is mirror-inverse
	return true;
}

// Driver code
int main()
{
		int arr[] = { 1, 2, 3, 0 };
		int n = sizeof(arr)/sizeof(arr[0]);
		if (mirr_inv(arr,n))
			cout << "Yes";
		else
			cout << "No";
		return 0;
}

// This code is contributed by Rajput-Ji
