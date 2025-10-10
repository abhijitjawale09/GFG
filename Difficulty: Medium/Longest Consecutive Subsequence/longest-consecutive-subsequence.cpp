#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;

        vector<int> ans = arr;
        sort(ans.begin(), ans.end());

        int res = 1;     
        int count = 1;   

        for (int i = 1; i < n; i++) {
            if (ans[i] == ans[i - 1] + 1) {
                // consecutive number
                count++;
            } 
            else if (ans[i] != ans[i - 1]) {
                res = max(res, count);
                count = 1; 
            }
        }

        res = max(res, count); 
        return res;
    }
};
