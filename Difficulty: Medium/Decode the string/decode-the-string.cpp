#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string decodedString(string &s) {
        stack<char> st;
        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ']') {
                st.push(s[i]); 
            } else {
              
                string temp = "";
                while (!st.empty() && st.top() != '[') {
                    temp += st.top();
                    st.pop();
                }
                st.pop(); // pop '['

                reverse(temp.begin(), temp.end());

                // Step 2: get the number
                string num = "";
                while (!st.empty() && isdigit(st.top())) {
                    num += st.top();
                    st.pop();
                }
                reverse(num.begin(), num.end()); // ✅ fix reversed digits
                int number = stoi(num);

                // Step 3: expand substring
                string expanded = "";
                expanded.reserve(temp.size() * number);
                for (int k = 0; k < number; k++) {
                    expanded.append(temp);
                }

                // Step 4: push expanded string back into stack
                for (char c : expanded) {
                    st.push(c);
                }
            }
        }

        // Final answer (stack content is reversed)
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
