class Solution {
  public:
    int countTriangles(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        sort(arr.begin() , arr.end());
        int count = 0;
        
        for(int i = 0; i < n; i++) {
            int right = i-1 , left = 0;
            while(left <  right) {
                if(arr[left] + arr[right] > arr[i]) {
                    count  += right - left;
                    right--;
                }else{
                    left++;
                }
            }
        }
        
        return count;
    }
};
