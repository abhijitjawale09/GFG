//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    string getBinaryRep(int N)
    {
        // Write Your Code here
        string ans = "000000000000000000000000000000";
        for (int i = 0; i < 30; i++) {
            if (N & (1 << i)) {
                ans[29 - i] = '1';
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
       
        Solution ob;
        string ans = ob.getBinaryRep(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends