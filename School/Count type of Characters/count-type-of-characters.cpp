//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            int count1 =0 ;
            int count2 =0 ;
            int count3 =0 ;
            int count4 =0 ;
            
            for(int i = 0 ; i <s.length() ; i++){
                if(isupper(s[i])){
                    count1++;
                }else if(islower(s[i])){
                    count2++;
                    
                }else if(isdigit(s[i])){
                    count3++;
                    
                }else{
                    count4++;
                }
            }
            return{count1, count2 , count3 ,count4};
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends