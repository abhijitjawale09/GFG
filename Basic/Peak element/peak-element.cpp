//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n) {
    if (n == 1) {
        return 0;
    }

    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if mid is a peak element
        if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == n - 1 || arr[mid] >= arr[mid + 1])) {
            return mid;
        }

        // If the element at mid is less than the element at mid + 1,
        // then there must be a peak element on the right side
        if (mid < n - 1 && arr[mid] < arr[mid + 1]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // This should never be reached if the input is valid
}

// Helper function to validate the result
bool isValidPeak(int arr[], int n, int index) {
    if (index < 0 || index >= n) {
        return false;
    }
    if (index > 0 && arr[index] < arr[index - 1]) {
        return false;
    }
    if (index < n - 1 && arr[index] < arr[index + 1]) {
        return false;
    }
    return true;
}
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tmp[i] = a[i];
		}
		bool f=0;
		Solution ob;
		
		int A = ob. peakElement(tmp,n);
		
		if(A<0 and A>=n)
		    cout<<0<<endl;
		else
		{
    		if(n==1 and A==0)
    		    f=1;
    		else if(A==0 and a[0]>=a[1])
    		    f=1;
    		else if(A==n-1 and a[n-1]>=a[n-2])
    		    f=1;
    		else if(a[A]>=a[A+1] and a[A]>= a[A-1])
    		    f=1;
    		else
    		    f=0;
    		cout<<f<<endl;
		}
		
	}

	return 0;
}
// } Driver Code Ends