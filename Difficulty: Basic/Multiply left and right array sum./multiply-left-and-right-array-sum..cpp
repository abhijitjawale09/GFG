//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);


int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}
// } Driver Code Ends


//User function Template for C++

int multiply(int arr[], int n)
{
    // Complete the function
   int sumLeft = 0;
    int sumRight = 0;
    
    // Calculate the midpoint
    int midpoint = n / 2;
    
    // Sum up the left subarray
    for (int i = 0; i < midpoint; ++i) {
        sumLeft += arr[i];
    }
    
    // Sum up the right subarray
    for (int i = midpoint; i < n; ++i) {
        sumRight += arr[i];
    }
    
    // Return the product of the two sums
    return sumLeft * sumRight;

}