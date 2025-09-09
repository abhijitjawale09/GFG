class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        // code here
        int n = mices.size();
        int mini = INT_MIN;
        sort(mices.begin() , mices.end());
        sort(holes.begin() , holes.end());
        for(int i = 0; i < n; i++) {
            mini = max(mini,abs(mices[i] - holes[i]));
        }
        
        return mini;
    }
};