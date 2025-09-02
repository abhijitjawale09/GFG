class Solution {
public:
    long long sumOfModes(vector<int>& arr, int k) {
        int n = arr.size();
        if (k > n) return 0;

        unordered_map<int,int> freq;                 // element -> frequency
        map<int, set<int>> freqToElems;              // frequency -> elements
        int maxFreq = 0;
        long long result = 0;

        auto add = [&](int x) {
            int oldFreq = freq[x];
            if (oldFreq > 0) {
                freqToElems[oldFreq].erase(x);
                if (freqToElems[oldFreq].empty()) freqToElems.erase(oldFreq);
            }
            freq[x]++;
            int newFreq = freq[x];
            freqToElems[newFreq].insert(x);
            maxFreq = max(maxFreq, newFreq);
        };

        auto remove = [&](int x) {
            int oldFreq = freq[x];
            freqToElems[oldFreq].erase(x);
            if (freqToElems[oldFreq].empty()) freqToElems.erase(oldFreq);

            freq[x]--;
            if (freq[x] == 0) freq.erase(x);
            else {
                freqToElems[freq[x]].insert(x);
            }

            if (freqToElems.find(maxFreq) == freqToElems.end()) {
                maxFreq--;
            }
        };

        // Initialize first window
        for (int i = 0; i < k; i++) add(arr[i]);
        result += *freqToElems[maxFreq].begin();

        // Slide window
        for (int i = k; i < n; i++) {
            add(arr[i]);
            remove(arr[i - k]);
            result += *freqToElems[maxFreq].begin();
        }

        return result;
    }
};


// class Solution {
// public:
//     int sumOfModes(vector<int>& arr, int k) {
//         int n = arr.size();
//         unordered_map<int, int> mp;
        
//         for(int i = 0; i < k; i++) {
//             mp[arr[i]]++;
//         }
        
//         int res = 0;
//         int maxFreq = 0, modeVal = INT_MAX;
//         for(auto &p : mp) {
//             if(p.second > maxFreq) {
//                 maxFreq = p.second;
//                 modeVal = p.first;
//             } else if(p.second == maxFreq && p.first < modeVal) {
//                 modeVal = p.first;
//             }
//         }
//         res += modeVal;
        
//         for(int i = k; i < n; i++) {
//             mp[arr[i-k]]--;
//             if(mp[arr[i-k]] == 0) mp.erase(arr[i-k]);
//                 mp[arr[i]]++;
//             maxFreq = 0; modeVal = INT_MAX;
//             for(auto &p : mp) {
//                 if(p.second > maxFreq) {
//                     maxFreq = p.second;
//                     modeVal = p.first;
//                 } else if(p.second == maxFreq && p.first < modeVal) {
//                     modeVal = p.first;
//                 }
//             }
//             res += modeVal;
//         }
//         return res;
//     }
// };
