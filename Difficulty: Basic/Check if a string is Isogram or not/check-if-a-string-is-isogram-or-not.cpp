//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        vector<int> v(26,0);
        for (int i = 0 ; i < s.size() ; i++){
            v[s[i]-'a']++;
        }
        for(int i = 0 ; i < 26  ;i++) {
            if(v[i] > 1){
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends