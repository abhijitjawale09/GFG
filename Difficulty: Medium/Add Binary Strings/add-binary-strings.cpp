//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
     reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        
        string ans = "";  // Store the resultant binary sum
        int carry = 0;    // To hold the carry value during addition
        
        int i = 0, j = 0;
        
        // Step 2: Process both strings until one is fully traversed
        while (i < s1.length() && j < s2.length()) {
            int sum = (s1[i] - '0') + (s2[j] - '0') + carry; // Add corresponding bits and carry
            carry = sum / 2; // Update carry (binary addition has a base of 2)
            ans.push_back((char)(sum % 2 + '0')); // Append the result (0 or 1) to the answer
            ++i; ++j;
        }
        
        // Step 3: Process remaining digits in s1
        while (i < s1.length()) {
            int sum = (s1[i] - '0') + carry;
            carry = sum / 2;
            ans.push_back((char)(sum % 2 + '0'));
            ++i;
        }
        
        // Step 4: Process remaining digits in s2
        while (j < s2.length()) {
            int sum = (s2[j] - '0') + carry;
            carry = sum / 2;
            ans.push_back((char)(sum % 2 + '0'));
            ++j;
        }
        
        // Step 5: If carry exists, append it to the result
        if (carry) {
            ans.push_back((char)(carry + '0'));
        }
        
        // Step 6: Remove leading zeros (if any)
        while (ans.size() > 1 && ans.back() == '0') {
            ans.pop_back();
        }
        
        // Step 7: Reverse the result string to restore correct order
        reverse(ans.begin(), ans.end());
        
        return ans; // Final binary sum as a string
    
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends