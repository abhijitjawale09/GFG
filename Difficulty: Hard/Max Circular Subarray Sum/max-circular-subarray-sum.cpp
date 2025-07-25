class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        // code here
        int n = arr.size();
        int maxsum = INT_MIN , currmax = 0;
        int minsum = INT_MAX, currmin = 0 , total = 0;
        
        for(int i = 0; i < n; i++) {
            currmax = max(currmax + arr[i] , arr[i]);
            maxsum = max(maxsum , currmax);
            
            currmin = min(currmin + arr[i] , arr[i]);
            minsum = min(minsum , currmin);
            total += arr[i];
        }
        
         if(maxsum < 0) {
            return maxsum;
        }
        
        if(total - minsum > maxsum) {
            return total - minsum;
        }else{
            return maxsum;
        }
    }
};