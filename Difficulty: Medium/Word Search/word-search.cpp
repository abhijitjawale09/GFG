//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    vector<vector<int>> directions{{-1, 0} , {0 , -1} , {1 , 0} , {0 , 1}};
    
    bool solve(vector<vector<char>>& mat, string& word , int i , int j ,int idx ,vector<vector<bool>>& visi) {
        int n = mat.size(), m = mat[0].size();
        if (idx == word.size()) return true;
        
        if(i >= n || j >= m || i < 0  || j < 0) {
            return false;
        }
        
        if(mat[i][j] != word[idx] || visi[i][j]) {
            return false;
        }
        
        visi[i][j] = true;
        for(auto &dir: directions) {
            int i_ = i + dir[0];
            int j_ = j + dir[1];
            
            if(solve(mat , word , i_ , j_ , idx + 1 , visi)) {
                return true;
            }
        }
        visi[i][j] = false;
        return false;
    }
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code here
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<bool>> visi(n , vector<bool> (m , false));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(word[0] == mat[i][j]) {
                    if(solve(mat , word , i , j, 0 ,visi)){
                        return true;
                    }
                    
                }
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        string word;
        cin >> word;
        Solution obj;
        bool ans = obj.isWordExist(mat, word);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends