//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string timeToWord(int H, int M){
        // code here
          std::string hours[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"};
    std::string minutes[] = {"o' clock", "one minute", "two minutes", "three minutes", "four minutes", "five minutes", 
                             "six minutes", "seven minutes", "eight minutes", "nine minutes", "ten minutes", 
                             "eleven minutes", "twelve minutes", "thirteen minutes", "fourteen minutes", 
                             "quarter", "sixteen minutes", "seventeen minutes", "eighteen minutes", 
                             "nineteen minutes", "twenty minutes", "twenty one minutes", "twenty two minutes", 
                             "twenty three minutes", "twenty four minutes", "twenty five minutes", 
                             "twenty six minutes", "twenty seven minutes", "twenty eight minutes", 
                             "twenty nine minutes", "half"};

    if (M == 0) {
        return hours[H] + " o' clock";
    } else if (M == 15) {
        return "quarter past " + hours[H];
    } else if (M == 30) {
        return "half past " + hours[H];
    } else if (M == 45) {
        return "quarter to " + hours[(H % 12) + 1];
    } else if (M < 30) {
        return minutes[M] + " past " + hours[H];
    } else {
        return minutes[60 - M] + " to " + hours[(H % 12) + 1];
    }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  H, M;
        cin >> H >> M;
        Solution ob;
        cout<<ob.timeToWord(H,M)<<endl;
    }
    return 0;
}

// } Driver Code Ends