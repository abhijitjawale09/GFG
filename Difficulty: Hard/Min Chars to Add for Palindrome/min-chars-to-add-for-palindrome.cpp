//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  vector<int> com(string s) {
          int n = s.size();
          vector<int> lps(n , 0);
          int len = 0;
          int i = 1;
          
          while(i < n) {
              if(s[i] == s[len]) {
                  len++;
                  lps[i] = len;
                  i++;
              }
              
              else {
                  if(len != 0) {
                      len = lps[len - 1];
                      
                  }else {
                      lps[i] = 0;
                      i++;
                  }
              }
          }
          return lps;
          
  } 
    int minChar(string& s) {
        // Write your code here
        int n = s.size();
        int count = 0;
        
        string rev =s;
        reverse(rev.begin() , rev.end());
        
        string cons = s + "#" + rev;
        
        vector<int> lps = com(cons);
        
        int palin = lps.back();
        
        
       return n - palin;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends