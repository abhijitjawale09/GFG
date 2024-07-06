//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    string getNumber(int B, int N)
    {
        // Write Your Code here
        if(N == 0) {
            return 0;
        }
        string result = "";
        while(N > 0){
            int remainder = N % B;
            N /= B;
        
         if (remainder < 10) {
            result += ('0' + remainder);
        } else {
            result += ('A' + (remainder - 10));
        }
        }
    std::reverse(result.begin(), result.end());
    return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int B,N;
        cin>>B>>N;
        Solution ob;
        string ans  = ob.getNumber(B,N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends