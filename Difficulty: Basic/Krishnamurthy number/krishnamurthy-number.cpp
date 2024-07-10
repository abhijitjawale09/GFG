//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int fact(int N) {
        if(N == 0 || N == 1){
            return 1;
        }
        return N*fact(N-1);
    }
    string isKrishnamurthy(int N) {
        // code here
        int anss = 0;
        int temp = N;
        while(temp > 0){
           int r = temp % 10;
           anss += fact(r); 
             temp = temp/ 10;
        }
        if(N == anss) {
            return "YES";
        }
        return "NO";
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isKrishnamurthy(N) << endl;
    }
    return 0;
}
// } Driver Code Ends