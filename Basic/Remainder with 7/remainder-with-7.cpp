//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    int remainderWith7(string n)
    {
        //Your code her
        int remainder = 0;

            for (int i = 0; i < n.length(); ++i) {
        int digit = n[i] - '0'; // Convert character to integer value
        remainder = (remainder * 10 + digit) % 7;
        }
        return remainder;
    
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
    string n;
    cin>>n;
    Solution ob;
    cout<<ob.remainderWith7(n)<<endl;
    
    }
	return 0;
}
// } Driver Code Ends