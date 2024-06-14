//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            vector<int> count1(26, 0);
            vector<int> count2(26, 0);
            for (char c : A) {
                count1[c - 'a']++;
            }
            for (char c : B) {
                count2[c - 'a']++;
            }
            string ans = "";
            for (int i = 0; i < 26; i++) {
                if (count1[i] > 0 && count2[i] == 0) {
                    ans.push_back(i + 'a');
                }
            }
            for (int i = 0; i < 26; i++) {
                if (count2[i] > 0 && count1[i] == 0) ans.push_back(i + 'a');
                
            } 
            sort(ans.begin() , ans.end());
            if(ans.empty()){
                return "-1";
            }
            
            return ans ;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends