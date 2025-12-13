class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int n = arr.size();
        vector<int> res;
        queue<int> que;
        int j = 0;
        for(int  i = 0; i < n; i++) {
            if(arr[i] < 0) {
                que.push(i);
            }
            if(i-j+1 == k) {
                while(!que.empty() && que.front() < j) {
                   que.pop();
                }
              
                if(que.empty()) {
                  res.push_back(0);
                } else{
                   res.push_back(arr[que.front()]);
                }
                j++;
            }
            
        }
        return res;
    }
};