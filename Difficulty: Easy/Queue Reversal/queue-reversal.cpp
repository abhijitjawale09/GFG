class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        int n = q.size();
        stack<int> st;
        while(!q.empty()) {
            st.push(q.front());
            q.pop();
        }
        
        while(!st.empty()) {
            q.push(st.top());
            st.pop();
        }
        
    }
};