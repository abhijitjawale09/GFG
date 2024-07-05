//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    long long X1Series(int X)
    {
        // Write Your Code here
        return  1LL * X *  X* X + X;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X;
        cin>>X;
      
        Solution ob;
        long long ans = ob.X1Series(X);
     
        cout<< ans << endl;
    }
    return 0;
}
// } Driver Code Ends