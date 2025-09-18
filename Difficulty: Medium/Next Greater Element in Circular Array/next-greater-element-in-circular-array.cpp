class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> res(n , -1);
        stack<int> st;
        
        for(int i = 2 *n -1; i >= 0; i--) {
            int idx = i % n;
            
            while(!st.empty() && arr[st.top()] <= arr[idx]) {
                st.pop();
            }
            
            if(!st.empty()) {
                res[idx]  = arr[st.top()];
            }
            
            st.push(idx);
        }
        // for(int i = 0; i < n; i++) {
        //     int ele = arr[i];
        //     for(int j = i + 1; j< i + n ; j++) {
        //         if(arr[j % n] > ele) {
        //             res[i] = arr[j % n]; 
        //             break;
        //         } 
        //     }
        // }
        return res;
    }
};