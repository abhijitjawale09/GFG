//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	

	public:
	long long countXorPair(long long arr[], int n)
	{
        // Your code goes here
        int counte = 0;
        int counto = 0 ;
        for(int i = 0 ; i < n ;i++) {
            if(arr[i] % 2 != 0) {
                counto++;                
            }else{
                counte++;
            }
        }
        return static_cast<long long>(counto) * counte; 
	}
};
	  


//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

       

        Solution ob;
        cout << ob.countXorPair(arr, n);
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends