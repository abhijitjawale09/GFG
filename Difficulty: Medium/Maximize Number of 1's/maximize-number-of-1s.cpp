class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        
        int co = 0;
        int j = 0, len = INT_MIN;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) {
                co++;
            }
            while(co > k) {
                if(arr[j] == 0) {
                    co--;
                }
                j++;
            }
            len = max(len ,i - j + 1);
        }
        return len;
        
    }
};
