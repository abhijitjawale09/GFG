class Solution {
  public:
    void solve(int idx, vector<int> &arr, vector<string> &res, string &temp, unordered_map<int, string> &mp) {
        if (idx == arr.size()) {
            res.push_back(temp);
            return;
        }
        if (arr[idx] == 0 || arr[idx] == 1) {
            solve(idx + 1, arr, res, temp, mp);
            return;
        }
        
        string letters = mp[arr[idx]];
        for (int i = 0; i < letters.size(); i++) {
            temp.push_back(letters[i]);
            solve(idx + 1, arr, res, temp, mp);
            temp.pop_back();
        }
    }
    
    vector<string> possibleWords(vector<int> &arr) {
        unordered_map<int , string> mp = {
            {2 , "abc"}, {3 , "def"}, {4 , "ghi"},
            {5 , "jkl"}, {6 , "mno"}, {7 , "pqrs"},
            {8 , "tuv"}, {9 , "wxyz"}
        };
        
        vector<string> res;
        string temp;
        
        solve(0, arr, res, temp, mp);
        
        return res;
    }
};
