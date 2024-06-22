//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string encryptString(string s){
    // code here
    int count = 1 ;
    string ans = "";
    int n = s.size();
    for(int i = 0; i < n ; i++) {
        if(i < n-1 && s[i] == s[i+1]){
            count++;
        }else{
            ans += s[i] + to_string(count);
            count = 1;
        }
    }
    reverse(ans.begin() , ans.end());
    return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
	    string s;
		cin>>s;
		Solution ob;
		string ans = ob.encryptString(s);
		cout<<ans<<endl;
	}
}

// } Driver Code Ends