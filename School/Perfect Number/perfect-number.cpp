//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     int isPerfect(int N) {
        // code here
        int m=N;
        int res=0;
        while(N!=0){
            int rem=N%10;
            int ans=1;
            for(int i=1; i<=rem; i++){
                ans*=i;
            }
            res+=ans;
            N=N/10;
            
        }
        if(res==m){
            return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPerfect(N) << "\n";
    }
}

// } Driver Code Ends