class Solution {
  public:
    bool isPossible(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int, int> mp , skip;
        
        for(int i = 0;i < n; i++) {
            mp[arr[i]]++;
        }
        
        for(int i = 0; i < n; i++) {
            if(skip[arr[i]] > 0 || mp[arr[i] - 1] > 0) continue;
            int start = arr[i];
            
            while(mp[start] > 0) {
                mp[start]--;
                if(start != arr[i]) {
                    skip[start]++;
                }
                start++;
            }
              if ((start-arr[i])<k) return false;
        }
        return true;
    }
};
