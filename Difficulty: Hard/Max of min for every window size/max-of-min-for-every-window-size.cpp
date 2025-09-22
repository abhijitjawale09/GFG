class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        //  code here
        int n = arr.size();
        vector<int> left(n) , right(n);
        
        stack<int> st;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()]  >= arr[i]) {
                st.pop();
            }
            left[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        
        while(!st.empty()) st.pop();
        
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            
            right[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        
        vector<int> res(n , INT_MIN);
        
        for(int  i = 0; i < n; i++)  {
            int len = right[i] - left[i] - 1;
            res[len-1] = max(res[len-1] , arr[i]);
        }
        
        for(int i = n - 2; i >= 0; i--) {
            res[i] = max(res[i] , res[i+1]);
        }
        return res;
    }
};

// class Solution {
//   public:
//     vector<int> maxOfMins(vector<int>& arr) {
//         int n = arr.size();
//         vector<int> res(n);
        
//         for (int i = 0; i < n; i++) {
//             int k = i + 1; 
//             vector<int> temp;
            
//             for (int j = 0; j + k <= n; j++) {
//                 int mn = INT_MAX;
//                 for (int x = j; x < j + k; x++) {
//                     mn = min(mn, arr[x]);
//                 }
//                 temp.push_back(mn);
//             }

//             int minmaxele = INT_MIN;
//             for (int val : temp) {
//                 minmaxele = max(minmaxele, val);
//             }

//             res[i] = minmaxele;
//         }

//         return res;
//     }
// };
