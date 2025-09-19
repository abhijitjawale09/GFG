class Solution {
  public:
    int minParentheses(string& s) {
        // code here
        int n = s.size();
        stack<char> st;
        
        int mini = 0;
        for(int i = 0; i < n ; i++) {
            if(s[i] == '(') {
                st.push(s[i]);
            }else if(st.empty() && s[i] == ')') {
                mini++;
            }else if(s[i] == ')' && st.top() == '('){
                st.pop();
            }
        } 
        
        return st.size() + mini;
    }
};