class Solution {
public:
    int maximizeMedian(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        
        long long lo, hi;
        if (n % 2 == 1) lo = arr[n/2];
        else lo = (arr[n/2 - 1] + arr[n/2]) / 2;  // starting median

        hi = lo + k;  
        long long best = lo;

        while (lo <= hi) {
            long long mid = (lo + hi) / 2;
            if (isPossible(arr, mid, k)) {
                best = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return (int)best;
    }

private:
    bool isPossible(vector<int>& arr, long long target, long long k) {
        int n = arr.size();

        if (n % 2 == 0) {
            long long need = max(0LL, 2 * target - (long long)(arr[n/2] + arr[n/2 - 1]));
            if (need > k) return false;
            k -= need;
            for (int i = n/2 + 1; i < n; i++) {
                if (arr[i] < target) {
                    k -= (target - arr[i]);
                    if (k < 0) return false;
                }
            }
            return true;
        }

        for (int i = n/2; i < n; i++) {
            if (arr[i] < target) {
                k -= (target - arr[i]);
                if (k < 0) return false;
            }
        }
        return true;
    }
};
