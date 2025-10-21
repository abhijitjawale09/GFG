class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        // Code here
        int n = arr.size();
        unordered_map<int ,int> mp;
        for(auto it : arr) {
            mp[it]++;
        }
        
        auto cmp = [](pair<int , int>& a, pair<int , int>&b) {
            if(a.first == b.first) {
                return a.second > b.second; 
            }
            return a.first > b.first;
        };
        priority_queue<pair<int , int> , vector<pair<int , int>> , decltype(cmp)> pq(cmp);
        
        for(auto &[ff, ss] : mp) {
            pq.push({ss , ff});
            if(pq.size() > k) {
                pq.pop();    
            }
        }
        
        vector<int> ans;
        while(!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        sort(ans.begin() , ans.end(), [&] (int &a , int &b) {
            if(mp[a] == mp[b]) {
                return a > b;
            }
            return mp[a] > mp[b];
        });
        return ans;
    }
};
