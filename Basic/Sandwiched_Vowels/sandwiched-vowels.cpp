//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
    
    public:

    string Sandwiched_Vowel(string s){
        // Your code goes here
    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    string result ;
    int n = s.length();
      if (n < 3) {
        return s;
    }
        for(int i = 0 ; i< s.size() ; i++){
            if(i > 0 && i <n -1) {
                if(vowels.count(s[i]) && !vowels.count(s[i+1]) && !vowels.count(s[i-1]) ){
                    continue;
                }
            }
            result += s[i];
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.Sandwiched_Vowel(s);
        cout<<ans<< endl;
    }

	return 0;
}
// } Driver Code Ends