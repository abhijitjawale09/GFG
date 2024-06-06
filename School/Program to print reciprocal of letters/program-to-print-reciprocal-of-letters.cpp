//{ Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string reciprocalString(string S)
    {
        // Write Your code here
        string ans = "";
        for (char c : S) {
            if (islower(c)) {
                 char reciprocal = 'z' -( c - 'a');  
                 ans += reciprocal;
            } else if (isupper(c)) {
                char reciprocal = 'Z' - (c - 'A');
                ans += reciprocal;
            } else {
                ans += c;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    }

	return 0;
}
// } Driver Code Ends