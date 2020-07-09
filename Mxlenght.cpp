// A simple C++ based program to find length of longest even length
// substring with same sum of digits in left and right
#include<bits/stdc++.h>
using namespace std;
int findLength(char *str)
{
    int count=0;
    int lenght;
	int n = strlen(str);
	int maxlen =0; // Initialize result
	// Choose starting point of every substring
	for (int i=0; i<n; i++)
	{
		// Choose ending point of even length substring
		for (int j =i+1; j<n; j += 2)
		{
			int length = j-i+1;//Find length of current substr
			// Calculate left & right sums for current substr
			int leftsum = 0, rightsum =0;
			for (int k =0; k<length/2; k++)
			{
				leftsum += (str[i+k]-'0');
				rightsum += (str[i+k+length/2]-'0');
				if (leftsum == rightsum && maxlen < length && lenght%2==0)
                {
                    if(count>=1 && lenght%2==0)
                        if (k<length/2 && leftsum == rightsum && i>0)
                        {

                            cout<<str[i+k]<<str[i+k+(j-i+1)/2]<<endl;
                            cout<<k<<" hi "<<i<<" bye "<<j-i+1<<endl;
                        //cout<<i;
                        }
                    //cout<<str[i+k]<<str[i+k+length/2]<<endl;
                    //cout<<str[i+k];
            //cout<<count<<" ";
            count+=1;
                //cout<<i;
                }
                //cout<<count;
			}
			// Update result if needed
			if (leftsum == rightsum && maxlen < length)
					maxlen = length;
    //cout<<count;
        //cout<<rightsum;
		}
	}
	return maxlen;
}
// Driver program to test above function
int main(void)
{
	char str[] = "153118023";
	cout << "Length of the substring is " << findLength(str)<<endl;
    return 0;
}
