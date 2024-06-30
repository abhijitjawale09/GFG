//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void printTriangleDownwards(string str)
    {
        // Write Your Code here
        int n = str.size();
        for(int i = 1; i <= n; i++) {
            for(int j = 0; j < n - i; j++) {
                cout<<".";
            }
            for(int k = 0; k < i; k++) {
                cout<<str[k];
            }
            cout<<endl;
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
        string str;
        cin >> str;

        Solution ob;
        ob.printTriangleDownwards(str);
    }
    return 0;
}
// } Driver Code Ends