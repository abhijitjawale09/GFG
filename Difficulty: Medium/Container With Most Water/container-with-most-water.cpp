class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        int right = n -1, left = 0;
        
        int res = 0;
        while(left < right) {
            int curr = min(arr[left] , arr[right]) * (right - left);
            res = max(res , curr);
            
            if (arr[left] < arr[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return res;
    }
};