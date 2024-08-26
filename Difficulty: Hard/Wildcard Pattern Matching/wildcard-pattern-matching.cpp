//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method*/
    int solve(string &pattern,string &str,int i,int j,vector<vector<int>>&dp){
        int n = str.size();int m = pattern.size();
        if(i==n and j==m){
            return 1;
        }
        else if(i==n){
            while(j < m){
                if(pattern[j]!='*'){
                    return 0;
                }
                j++;
            }
            return 1;
        }
        else if(j==m){
            return 0;
        }
        else if(dp[i][j]!=-1){
            return dp[i][j];
        }
        else{
            if(pattern[j] == '*'){
                int x1 = solve(pattern,str,i+1,j,dp);
                int x2 = solve(pattern,str,i,j+1,dp);
                int x3 = solve(pattern,str,i+1,j+1,dp);
                return dp[i][j]=(x1|x2|x3);
            }
            else if(pattern[j] == '?'){
                int x3 = solve(pattern,str,i+1,j+1,dp);
                return dp[i][j]=x3; 
            }
            else{
                if(pattern[j] == str[i]){
                    return dp[i][j]=solve(pattern,str,i+1,j+1,dp);
                }
                return dp[i][j]=0;
            }
        }
    }
    int wildCard(string pattern, string str) {
        int n = str.size();
        int m = pattern.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(pattern,str,0,0,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, text;
        cin >> pat;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> text;
        Solution obj;
        cout << obj.wildCard(pat, text) << endl;
    }
}

// } Driver Code Ends