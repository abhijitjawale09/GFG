//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool decode (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << decode (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


bool decode (string S)
{
    // your code here
    string p= "hello" ;
    int j=0;
    for(int i=0;i<S.length();i++){
       if(S[i]==p[j]){
           j++;
       }
   }
   return p.size()==j ? 1:0;
}