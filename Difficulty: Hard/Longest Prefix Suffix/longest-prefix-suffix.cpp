//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int lps(string str) {
        // Your code goes here
        int n = str.size();
        int count = 0  , j = 1 , i = 0 , pos = 0 ;
        while(j < n) {
            if(str[i] == str[j]){
                 count++;
                 i++;
                 j++;
                 
            }else{
                i = 0;
                pos++;
                j = pos;
                count = 0;
            }
        }        
        return count;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends