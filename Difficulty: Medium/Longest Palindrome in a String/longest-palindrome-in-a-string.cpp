class Solution {
  public:
    string longestPalindrome(string &s) {
        // code here
        int n = s.size();
        
        int start = 0 , maxlen = 0;
        for(int i = 0; i < n; i++) {
            for(int k : {i , i + 1}) {
                int j = i , l = k;
                while(j >= 0 &&  l < n && s[j] == s[l]) {
                    j--;
                    l++;
                }
                if(l - j -1 > maxlen) {
                    maxlen = l - j -1;
                    start = j + 1;
                }
            }
        }
        return s.substr(start, maxlen);
    }
};