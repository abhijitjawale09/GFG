//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        // code here
        vector<int> a ;
        int add = A + B;
        int mul = A * B;
        int sub = 0 ;
        int div = 0 ;
        if(B>A){
             sub = B-A;
             div = B/A;
        }else{
            sub = A -B;
            div = A/B;
        }
        a.push_back(add);
        a.push_back(mul);
        a.push_back(sub);
        a.push_back(div);
        return{add , mul , sub , div };
    } 
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans) cout << u << "\n";
    }
}
// } Driver Code Ends