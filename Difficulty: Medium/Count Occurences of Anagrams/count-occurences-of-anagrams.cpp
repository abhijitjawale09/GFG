class Solution {
  public:
    bool allzero(vector<int> &count) {
        for(int i = 0; i < 26; i++) {
            if(count[i] != 0) {
                return false;
            }
        }
        return true;
    }

    int search(string &pat, string &txt) {
        int n = txt.size();
        int k = pat.size();
        
        if(k > n) return 0;

        vector<int> count(26, 0);

        // initialize count with pattern
        for(int i = 0; i < k; i++) {
            count[pat[i] - 'a']++;
        }

        int i = 0, j = 0, res = 0;

        while(j < n) {
            count[txt[j] - 'a']--;

            if(j - i + 1 == k) {
                if(allzero(count)) {
                    res++;
                }
                count[txt[i] - 'a']++;
                i++;
            }
            j++;
        }
        return res;
    }
};
