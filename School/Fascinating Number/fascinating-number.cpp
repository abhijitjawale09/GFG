//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	bool fascinating(int n) {
	    // code here
	      long mul2 = 2*n;
        long mul3 = 3*n;  
        string s= to_string(n) + to_string(mul2)  + to_string(mul3) ;
        if(s.size()!=9){
            return false;
        }
        for(char c ='1';c<='9';c++){
            if(s.find(c) == string::npos){
                return false;
            }
        }
        return true;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
// } Driver Code Ends