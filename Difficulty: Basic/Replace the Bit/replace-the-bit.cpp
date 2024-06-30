//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int replaceBit (int N, int k)
    {
        //code here.
        if(k <= 0){
            return N;
        }
         int num_bits = floor(log2(N)) + 1;
    
    // Adjust K to 0-based indexing from the left
    int bit_position = num_bits - k;
        if (bit_position >= 0) {
        // Check if the Kth bit is set
        if (N & (1 << bit_position)) {
            // Kth bit is 1, so change it to 0
            return N & ~(1 << bit_position);
        } else {
            // Kth bit is 0, no change needed
            return N;
        }
    } else {
        // Kth bit from the left does not exist, return N unchanged
        return N;
    }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        Solution ob;
        cout <<ob.replaceBit (n, k) << endl;
    }
    return 0;
}


// } Driver Code Ends