//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int countWrongPlacedBalls(string s);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        cout<<countWrongPlacedBalls(a)<<endl;
        
    }
}

// } Driver Code Ends



int countWrongPlacedBalls(string s) {
   int n = s.length();
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] =='R' && (i+1)%2 == 0)
            count++;
        else if(s[i] == 'B' && (i+1)%2 != 0)
            count++;
    }
    return count;
}