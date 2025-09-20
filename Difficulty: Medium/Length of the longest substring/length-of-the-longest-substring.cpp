class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        vector<int> vec(26 , -1); 
        int maxlen = 0;
        int start = 0; 

        for(int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if(vec[ch - 'a'] >= start) {
                start = vec[ch - 'a'] + 1;
            }
            
            vec[ch - 'a'] = i; 
            maxlen = max(maxlen , i - start + 1); 
        }
        return maxlen;
    }
};
