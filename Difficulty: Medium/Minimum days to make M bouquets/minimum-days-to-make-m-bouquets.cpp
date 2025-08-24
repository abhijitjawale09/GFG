class Solution {
  public:
    int bs(vector<int>& arr, int k, int m, int mid) {
        int cnt = 0;
        int bou  = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] <= mid) {
                cnt++;
            }else {
                cnt = 0;
            }
            
            if(cnt == k) {
                bou++;
                cnt =0;
            }
        }
        return bou;
    }
    
    int minDaysBloom(vector<int>& arr, int k, int m) {
        // Code here
        int n = arr.size();
        if(1LL * k * m > n) return -1;
        int i = 0;
        int j = *max_element(arr.begin() , arr.end());
        
        int res = -1;
        while(i <= j) {
            int mid = (i + j)/2;
            
            if(bs(arr , k , m , mid) >= m) {
                res = mid;
                j = mid -1;
            }else {
                i = mid + 1;
            }
        }
        return res;
    }
};