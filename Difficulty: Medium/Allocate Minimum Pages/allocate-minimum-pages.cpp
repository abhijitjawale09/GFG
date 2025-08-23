class Solution {
  public:
    bool check(vector<int> &arr, int k, int pagelimit) {
        int cnt = 1;
        int pagesum = 0;
        for(int i = 0; i < arr.size(); i++) {
            
            if(pagesum + arr[i] > pagelimit) {
                cnt++;
                pagesum = arr[i];
            }else {
                pagesum += arr[i];
            }
        }
        return cnt <= k;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n =  arr.size();
        if(k > n) {
            return -1;
        }
        int lo = *max_element(arr.begin() , arr.end());
        int hi = accumulate(arr.begin() , arr.end() , 0);
        int res = -1;
        
        while(lo <= hi) {
            int mid = (lo + hi)/2;
            
            if(check(arr , k , mid)) {
                res = mid ;
                hi = mid -1;
            }else {
                lo = mid + 1;
            }
        }
        return res;
    }
};
