//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    double power(double b, int e) {
        // code here
        double multipler;
        
        bool flag = 1;
        
        if(b > 0) {
            flag = -1;
        }
        if(e == 0 ) {
            return 1;
        }
        
        multipler = power(b , e / 2);
        
        if(e % 2 == 0) {
            return multipler * multipler;
        }else{
            if(e > 0) {
                return b*multipler*multipler;
            }else{
                return (multipler*multipler)/b;
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    cout << fixed << setprecision(5);
    int t;
    cin >> t;
    while (t--) {
        double b;
        cin >> b;
        int e;
        cin >> e;
        Solution ob;
        cout << ob.power(b, e) << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends