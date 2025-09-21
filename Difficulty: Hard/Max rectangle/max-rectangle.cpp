class Solution {
  public:
    int largestRectangleArea(vector<int> & height) {
        int n = height.size();
        stack<int> st;
        int maxarea = 0;
        
        for(int i = 0; i <= n; i++) {
            while(!st.empty() && (i == n || height[st.top()] >= height[i])) {
                int h = height[st.top()];
                st.pop();
                
                int width = st.empty() ? i : (i - st.top() - 1);
                maxarea = max(maxarea , h * width);
            }
            st.push(i);
        }
        return maxarea;
    }
    int maxArea(vector<vector<int>> &mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        
        vector<int> height(m , 0);
        int maxrect = 0;
        
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(mat[i][j] == 0) {
                    height[j] = 0;
                }else {
                    height[j] += mat[i][j];
                }
            }
            
            maxrect  = max(maxrect , largestRectangleArea(height));
        }
        return maxrect;
    }
};