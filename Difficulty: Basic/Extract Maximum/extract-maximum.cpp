//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{
  public:
    
    int extractMaximum(string S) 
    { 
        //code here.
        int n = S.length();
        int maxans = -1;

        for(int i = 0; i < S.size() ; i++) {
            int ans = -1;
            while (i < n && isdigit(S[i])) {
                if(ans == -1) ans =0;
                ans = ans * 10 + (S[i] - '0');
                i++;
            }
            maxans = max(maxans, ans);
        }
        if(maxans == -1){
            return -1;
        }
        return maxans;
    } 
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.extractMaximum(S)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends