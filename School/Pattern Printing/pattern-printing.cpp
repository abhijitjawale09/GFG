//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void printPattern(int N)
    {
        // Write Your Code here
        string s ="*";
        for(int i =1 ;i<=N;i++){
            cout<<s<<" ";
            s += "*";
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
        int N;
        cin>>N;
        Solution ob;
        ob.printPattern(N);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends