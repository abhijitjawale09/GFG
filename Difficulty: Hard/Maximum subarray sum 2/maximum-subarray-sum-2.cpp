#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSubarrSum(vector<int>& arr, int a, int b) {
        int n = arr.size();
        vector<long long> pref(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + arr[i];
        }

        deque<int> dq; 
        long long maxSum = LLONG_MIN;

        for (int r = a; r <= n; r++) {
            int l = r - a;
            while (!dq.empty() && pref[dq.back()] >= pref[l]) {
                dq.pop_back();
            }
            dq.push_back(l);
            while (!dq.empty() && dq.front() < r - b) {
                dq.pop_front();
            }
            if (!dq.empty()) {
                maxSum = max(maxSum, pref[r] - pref[dq.front()]);
            }
        }

        return (int)maxSum;
    }
};
