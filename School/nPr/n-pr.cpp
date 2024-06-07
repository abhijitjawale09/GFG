//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long fact(int n){
            if(n ==0 || n ==1){
                return 1;
                
            }
            long long result= 1;
            for(int i = 2 ; i<= n; ++i){
                result *= i;
            }
            return result;
        }
    long long nPr(int n, int r){
        // code here
        long long c = fact(n);
        long long d = fact(n-r);
        return c/d;
       
    }
    
    
    
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nPr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends