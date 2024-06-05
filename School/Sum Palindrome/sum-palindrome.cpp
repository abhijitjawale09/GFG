//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long reverse(long long n) {
        long long ans = 0;
        while (n > 0) {
            ans = ans * 10 + (n % 10);
            n /= 10;
        }
        return ans;
    }
    long long isSumPalindrome(long long n){
        // code here
        long long temp = n;
        for (int i = 0; i <= 5; i++) {
            
            long long ans = reverse(temp);
            if (ans == temp) {
                return ans;
            }
            
            temp += ans;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        cout<<ob.isSumPalindrome(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends