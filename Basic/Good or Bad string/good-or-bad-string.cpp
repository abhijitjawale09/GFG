//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isGoodorBad(string S) {
        // code here
        int vowel_count = 0, consonant_count = 0;
        string vowels = "aeiou";
        
        for (char ch : S) {
            if (vowels.find(ch) != string::npos || ch == '?') {
                vowel_count++;
            } else {
                vowel_count = 0;
            }
            
            if (vowels.find(ch) == string::npos || ch == '?') {
                consonant_count++;
            } else {
                consonant_count = 0;
            }
            
            if (vowel_count > 5 || consonant_count > 3) {
                return 0; // BAD
            }
        }
        
        return 1; // GOOD
    }
    
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        
        cin >> S;
        
        Solution ob;
        cout << ob.isGoodorBad(S) << endl;
    }
    return 0; 
}
// } Driver Code Ends