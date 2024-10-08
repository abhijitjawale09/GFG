//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        long ans = 1;
        if(N==1)
        {
            return 0;
        }
        for(int i = 2; i <= sqrt(N); i++) {
            if(N%i == 0){
                ans+= i;
            }
        }
        if(N %ans == 0 && ans != 1) {
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
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends