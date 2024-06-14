//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        if(S.empty()){
            return "";
        }
        string result = "";
        // result.push_back(S[0]);
        for(int i = 0 ;i < S.size(); i++) {
            if(S[i] != S[i+1]){
                result.push_back(S[i]);
            }
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends