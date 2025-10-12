// User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution {
  public:
    void f(vector<string> &ans , string s, int n, int o,int c) {
        if(o + c == n) {
            ans.push_back(s);
            return;
        }
        
        if(o + 1 <= n / 2)  f(ans, s + '(' , n , o + 1, c);
        
        if(c + 1 <= o) f(ans , s + ')' , n , o , c + 1);
    }
    vector<string> generateParentheses(int n) {
        // code here
        vector<string> ans;
        f(ans , "" , n , 0, 0);
        return ans;
    }
};